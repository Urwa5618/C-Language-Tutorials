#include <stdio.h>
#include <string.h>
typedef struct cricketer
{
    char firstname[15];
    char lastname[15];
    int age;
    int nofmatches;
    float average;
} cricketer;

int main () {
    cricketer arr[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%s %s",arr[i].firstname,arr[i].lastname);
        scanf("%d",&arr[i].age);
        scanf("%d",&arr[i].nofmatches);
        scanf("%f",&arr[i].average);
    }
     for (int i = 0; i < 3; i++)
    {
        printf("Name: %s %s\n",arr[i].firstname,arr[i].lastname);
        printf("Age: %d\n",arr[i].age);
        printf("Number of Matches: %d\n",arr[i].nofmatches);
        printf("Average: %.2f\n",arr[i].average);
        printf("\n");
    }
    return 0;

}