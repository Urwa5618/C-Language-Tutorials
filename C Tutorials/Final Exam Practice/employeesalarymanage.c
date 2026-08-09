#include <stdio.h>
#include <string.h>
struct salary
{
    int basic;
    int bonus;
    int deduction;
};

struct Employee
{
    int ID;
    char name[15];
    struct salary s;
};
int main () {
    struct Employee e;
    printf("Enter ID,name,basic,bonus,deduction:\n");
    scanf("%d %s %d %d %d",&e.ID,e.name,&e.s.basic,&e.s.bonus,&e.s.deduction);
    printf("--------Employee Details--------\n");
    printf("ID:%d\nName:%d",e.ID,e.name);
    printf("\nBasic:%d\nBonus:%d\nDeduction:%d\n",e.s.basic,e.s.bonus,e.s.deduction);
    int net = e.s.basic + e.s.bonus - e.s.deduction;
    printf("Net Amount:%d",net);
    return 0;
}