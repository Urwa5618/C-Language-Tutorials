#include <stdio.h>
struct student
{
    char name[30];
    int age;
    float totalmarks;
};
int main () {
struct student s1,s2;
printf("Enter details for student 1:\n");

printf("Name:\n");
scanf("%s", s1.name);

printf("Age:\n");
scanf("%d",&s1.age);

printf("Totalmarks:\n");
scanf("%f",&s1.totalmarks);

printf("Enter details for student 2:\n");

printf("Name:\n");
scanf("%s", s2.name);

printf("Age:\n");
scanf("%d",&s2.age);

printf("Totalmarks:\n");
scanf("%f",&s2.totalmarks);

printf("Student 1 information:\n");
printf("Name:%s\n",s1.name);
printf("Age:%d\n",s1.age);
printf("Totalmarks:%.2f\n",s1.totalmarks);

printf("Student 2 information:\n");
printf("Name:%s\n",s2.name);
printf("Age:%d\n",s2.age);
printf("Totalmarks:%.2f\n",s2.totalmarks);

float avgmarks = (s1.totalmarks + s2.totalmarks) / 2;
printf("Average marks:%.2f\n",avgmarks);
    return 0;
}