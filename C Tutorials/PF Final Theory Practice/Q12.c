#include <stdio.h>
struct Student
{
    char name[20];
    int age;
    float marks;
};
int main (){
    struct Student s;
    scanf("%s %d %f",&s.name,&s.age,&s.marks);
    struct Student *p = &s;

    printf("Name = %s",p->name);
    printf("Age = %d",p->age);
    printf("Marks = %f",p->marks);
    return 0;
}
