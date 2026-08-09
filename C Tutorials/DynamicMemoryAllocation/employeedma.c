#include <stdio.h>
#include <stdlib.h>
typedef struct employee
{
    char name[20];
    float salary;
}employee;

int main () {
    int n;
    scanf("%d",&n);
    employee *e=(employee*)malloc(n*sizeof(employee));
    if(e==NULL){
        printf("Memory Allocation Failed!");
        return 1;
    }
    float netsalary=0;
    for(int i=0;i<n;i++){
        printf("Employee %d:",i+1);
        scanf("%s %f",e[i].name,&e[i].salary);
        netsalary = netsalary + e[i].salary;
    }
    printf("Total Salary of all employees:%.2f\n",netsalary);
    free(e);
    return 0;
}