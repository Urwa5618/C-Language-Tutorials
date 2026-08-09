#include <stdio.h>
#include <string.h>
typedef struct student
{
    char name[20];
    int Rollnumber;
    char dept[20];
    char course[20];
    int yearofjoining;
} student;
void check(student s1,student s2){
    if(strcmp(s1.dept,s2.dept) == 0){
        printf("They have the same department");
    }else printf("Departments are not same\n");
}
int main () {
    struct student s1,s2;  
    printf("Enter details of Student 1:\n");
    strcpy(s1.name,"Ali");
    scanf("%d",&s1.Rollnumber);
    strcpy(s1.dept,"Computer Science");
    strcpy(s1.course,"Programming Fundamentals");
    scanf("%d",&s1.yearofjoining);
    printf("Enter details of Student 2:\n");
    strcpy(s2.name,"Aisha");
    scanf("%d",&s2.Rollnumber);
    strcpy(s2.dept,"Computer Science");
    strcpy(s2.course,"Calculus");
    scanf("%d",&s2.yearofjoining);
    check(s1,s2);
    return 0;
}