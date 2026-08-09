#include <stdio.h>
#include <string.h>
struct dateofbirth
{
    int day,month,year;
};
struct marks
{
    int math,phy,cs,chem;
};
struct student
{
    int Rollnumber;
    char name[15];
    struct dateofbirth dob;
    struct marks m;
};
int main(){
    struct student s;
    printf("----Enter Detail of Student----\n");
    scanf("%d %s %d %d %d %d %d %d %d",&s.Rollnumber,s.name,&s.dob.day,&s.dob.month,&s.dob.year,&s.m.math,&s.m.cs,&s.m.phy,&s.m.chem);

    printf("Roll Number:%d\nName:%s\nDate of birth:%d/%d/%d\nMarks:\nMath:%d\nComputer Science:%d\nPhysics:%d\nChemistry:%d\n",s.Rollnumber,s.name,s.dob.day,s.dob.month,s.dob.year,s.m.math,s.m.cs,s.m.phy,s.m.chem);
    return 0;
}