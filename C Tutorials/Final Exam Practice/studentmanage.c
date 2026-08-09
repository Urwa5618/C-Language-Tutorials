#include <stdio.h>
#include <string.h>
struct marks
{
    int math;
    int phy;
    int cs;
};
struct student
{
    int Rollnumber;
    char name[15];
    struct marks m;
};
int main () {
    struct student s1;
    printf("Enter Roll,name,math,phy,cs:\n");
    scanf("%d %s %d %d %d",&s1.Rollnumber,s1.name,&s1.m.math,&s1.m.phy,&s1.m.cs);

    printf("----Student Details----\n");
    printf("Roll Number:%d\nName:%s",s1.Rollnumber,s1.name);
    printf("\nMath:%d\nPhysics:%d\nCS:%d\n",s1.m.math,s1.m.phy,s1.m.cs);
    return 0;
}