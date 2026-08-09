#include <stdio.h>
#include <string.h>
struct Address
{
    char city[10];
    int ZIP;
};

struct Person
{
    char name[25];
    struct Address a;
};
int main () {
    struct Person p = {"Urwa",{"Karachi",68050}};
    struct Person *ptr = &p;
    printf("Name:%s\nCity:%s\nZIP:%d\n",(*ptr).name,(*ptr).a.city,(*ptr).a.ZIP);

    return 0;
}