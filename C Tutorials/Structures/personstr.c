#include <stdio.h>
struct Person {
    char name[30];
    int age;
    float salary;
} p1, p2;

int main () {
    printf("Details of person 1:\n");
    scanf("%s %d %f", p1.name, &p1.age, &p1.salary);

    printf("Details of person 2:\n");
    scanf("%s %d %f", p2.name, &p2.age, &p2.salary);

    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p2.age);

    return 0;
}
