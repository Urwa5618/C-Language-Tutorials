#include <stdio.h>

#define MAX_DAYS 31
#define CATEGORIES 6
#define UTILITIES_INDEX 2   // Utilities category index (0-based)

char categoryNames[CATEGORIES][20] = {
    "Food", "Transport", "Utilities", "Health", "Entertainment", "Other"
};

char *weekdays[7] = {
    "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"
};

float dailyExpenses[MAX_DAYS][CATEGORIES] = {0};
float monthlyIncome = 0;
float utilitiesBill = 0;
int numDays = MAX_DAYS;

// Function declarations
void inputMonthlyExpenses();
void displayDayExpense(int day);
void displayMonthlySummary();
void displayFullMonthTable();
int getYesNo(const char *prompt);
int getValidInt(const char *prompt, int min, int max);
float getValidFloat(const char *prompt, float min);

int main() {
    printf("=== Monthly Expense Tracker ===\n\n");

    numDays = getValidInt("Enter number of days in the month (28–31): ", 28, MAX_DAYS);
    monthlyIncome = getValidFloat("Enter your monthly income: ", 0);

    // Utilities input once per month
    utilitiesBill = getValidFloat("Enter Utilities bill for the month: ", 0);
    dailyExpenses[0][UTILITIES_INDEX] = utilitiesBill; // assign to first day

    inputMonthlyExpenses();

    int choice;

    // Full month table
    choice = getYesNo("\nDo you want to display the full month expense table? (1=Yes, 0=No): ");
    if(choice) displayFullMonthTable();

    // Monthly summary
    choice = getYesNo("\nDo you want to display the monthly summary? (1=Yes, 0=No): ");
    if(choice) displayMonthlySummary();

    // Day-wise query
    do {
        choice = getYesNo("\nDo you want to check a specific day's expense? (1=Yes, 0=No): ");
        if(choice) {
            int day = getValidInt("Enter the day number to view: ", 1, numDays);
            displayDayExpense(day);
        }
    } while(choice);

    printf("\n=== Thank you for using Expense Tracker! ===\n");
    return 0;
}

// ===== Input monthly expenses =====
void inputMonthlyExpenses() {
	int d,i;
    float totalSpent = utilitiesBill; // Include utilities in total
    for ( d = 0; d < numDays; d++) {
        int weekdayIndex = d % 7;
        printf("\nDay %d - %s\n", d + 1, weekdays[weekdayIndex]);

        int hasExpense = getYesNo("Was there any expense today? (1=Yes, 0=No): ");
        if(!hasExpense) continue;

        int more = 1;
        while(more) {
            printf("Select category:\n");
            for( i=0; i<CATEGORIES; i++) {
                if(i == UTILITIES_INDEX) continue; // skip utilities
                printf("%d. %s\n", i+1, categoryNames[i]);
            }

            int cat = getValidInt("Enter category number: ", 1, CATEGORIES);
            if(cat == UTILITIES_INDEX + 1) {
                printf("Utilities are entered once per month and cannot be added daily.\n");
                continue;
            }

            float amount = getValidFloat("Enter amount: ", 0);
            dailyExpenses[d][cat-1] += amount;
            totalSpent += amount;

            // Check warnings
            if(totalSpent >= 0.9 * monthlyIncome)
                printf("? Warning: You have spent 90%% of your monthly income!\n");
            else if(totalSpent >= 0.75 * monthlyIncome)
                printf("? Warning: You have spent 75%% of your monthly income!\n");
            else if(totalSpent >= 0.5 * monthlyIncome)
                printf("? Warning: You have spent 50%% of your monthly income!\n");

            more = getYesNo("Add another expense for this day? (1=Yes, 0=No): ");
        }

        // Weekly summary after every 7 days or last day
        if ((d+1) % 7 == 0 || d == numDays-1) {
            int showWeek = getYesNo("\nDo you want to display weekly expense report? (1=Yes, 0=No): ");
            if(showWeek) {
                int weekStart = d - (d % 7);
                int weekEnd = d,day,c;

                printf("\n===== Weekly Expense Summary (Days %d–%d) =====\n", weekStart+1, weekEnd+1);

                // TABLE HEADER
                printf("%-15s", "Category");
                for( day = weekStart; day <= weekEnd; day++) {
                    printf("| Day %-3d ", day+1);
                }
                printf("| Total\n");

                printf("-------------------------------------------------------------------------------\n");

                float weekTotal = 0;

                // CATEGORY ROWS
                for(c = 0; c < CATEGORIES; c++) {
                    float catTotal = 0;
                    printf("%-15s", categoryNames[c]);

                    for(day = weekStart; day <= weekEnd; day++) {
                        float amt = dailyExpenses[day][c];
                        printf("| %-7.2f ", amt);
                        catTotal += amt;
                    }

                    printf("| %-7.2f\n", catTotal);
                    weekTotal += catTotal;
                }

                printf("-------------------------------------------------------------------------------\n");
                printf("Weekly Total: %.2f\n", weekTotal);
                printf("Remaining Balance: %.2f\n", monthlyIncome - weekTotal);
            }
        }
    }
}

// ===== Display day-wise expense =====
void displayDayExpense(int day) {
    int d = day-1;
    float total = 0;
    int empty = 1,i;

    printf("\n=== Day %d (%s) Expense Summary ===\n", day, weekdays[d%7]);
    printf("-------------------------------------------\n");
    printf("%-15s | %-10s\n", "Category", "Amount");
    printf("-------------------------------------------\n");

    for(i=0; i<CATEGORIES; i++) {
        if(i == UTILITIES_INDEX && day != 1) continue; // utilities only on day 1
        float amt = dailyExpenses[d][i];
        if(amt != 0) empty = 0;
        printf("%-15s | %-10.2f\n", categoryNames[i], amt);
        total += amt;
    }

    printf("-------------------------------------------\n");
    if(empty) {
        printf("No expenses recorded for Day %d.\n", day);
    } else {
        printf("Total for Day %d: %.2f\n", day, total);
    }
}

// ===== Display monthly summary in day-wise table =====
void displayMonthlySummary() {
	int d,c;
    printf("\n===== Monthly Expense Summary =====\n");

    // HEADER
    printf("%-15s", "Category");
    for(d=0; d<numDays; d++) {
        printf("| Day %-2d ", d+1);
    }
    printf("| Total\n");
    printf("-------------------------------------------------------------------------------\n");

    float grandTotal = 0;

    for(c=0; c<CATEGORIES; c++) {
        printf("%-15s", categoryNames[c]);
        float catTotal = 0;
        for(d=0; d<numDays; d++) {
            float amt = dailyExpenses[d][c];
            if(c == UTILITIES_INDEX && d != 0) amt = 0; // utilities only on day 1
            printf("| %-7.2f ", amt);
            catTotal += amt;
        }
        printf("| %-7.2f\n", catTotal);
        grandTotal += catTotal;
    }

    printf("-------------------------------------------------------------------------------\n");
    printf("Total Monthly Expenses: %.2f\n", grandTotal);
    printf("Remaining Balance: %.2f\n", monthlyIncome - grandTotal);
}

// ===== Display full month table =====
void displayFullMonthTable() {
	int c,d;
    printf("\n===== Full Month Expense Table =====\n");
    printf("%-6s | %-10s", "Day", "Weekday");
    for(c=0; c<CATEGORIES; c++) {
        printf("| %-12s", categoryNames[c]);
    }
    printf("| %-10s\n", "Total");
    printf("--------------------------------------------------------------------------------\n");

    float grandTotal = 0;
    for(d=0; d<numDays; d++) {
        float dayTotal = 0;
        printf("%-6d | %-10s", d+1, weekdays[d%7]);
        for(c=0; c<CATEGORIES; c++) {
            printf("| %-12.2f", dailyExpenses[d][c]);
            dayTotal += dailyExpenses[d][c];
        }
        grandTotal += dayTotal;
        printf("| %-10.2f\n", dayTotal);
    }

    printf("--------------------------------------------------------------------------------\n");
    printf("Grand Total: %.2f\n", grandTotal);
}

// ===== Helper functions =====
int getYesNo(const char *prompt) {
    int choice;
    do {
        printf("%s", prompt);
        if(scanf("%d", &choice)!=1 || (choice!=0 && choice!=1)) {
            printf("Invalid input! Enter 1 for Yes, 0 for No.\n");
            while(getchar()!='\n');
        } else break;
    } while(1);
    while(getchar()!='\n');
    return choice;
}

int getValidInt(const char *prompt, int min, int max) {
    int value;
    int status;
    do {
        printf("%s", prompt);
        status = scanf("%d", &value);
        while(getchar()!='\n');
        if(status!=1 || value<min || value>max) {
            printf("Invalid input! Enter a number between %d and %d.\n", min, max);
        } else break;
    } while(1);
    return value;
}

float getValidFloat(const char *prompt, float min) {
    float value;
    int status;
    do {
        printf("%s", prompt);
        status = scanf("%f", &value);
        while(getchar()!='\n');
        if(status!=1 || value<min) {
            printf("Invalid input! Enter a number >= %.2f.\n", min);
        } else break;
    } while(1);
    return value;
}

