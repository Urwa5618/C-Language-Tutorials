#include <stdio.h>
#include <string.h>
struct dateofbirth
{
    int day,month,year;
};
struct student
{
    int Rollnumber;
    char name[15];
    struct dateofbirth dob;
};
int main () {
    struct student s[3];
    printf("Enter 3 Student Name and ID:\n");
    for(int i=0;i<3;i++){
    scanf("%d %s %d %d %d",&s[i].Rollnumber,s[i].name,&s[i].dob.day,&s[i].dob.month,&s[i].dob.year);
    }
    printf("--------Student Details--------\n");
    for(int i=0;i<3;i++){
    printf("Name:%s\nID:%d\nDate of Birth:%d/%d/%d\n",s[i].name,s[i].Rollnumber,s[i].dob.day,s[i].dob.month,s[i].dob.year);
    }
    return 0;
}