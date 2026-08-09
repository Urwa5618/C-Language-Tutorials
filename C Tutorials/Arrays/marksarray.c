#include<stdio.h>
int main (){
    int marks[5];
    for(int i=0;i<5;i++){
        scanf("%d",&marks[i]);
    }
    for(int i=0;i<5;i++){
        if(marks[i]<35){
            printf("Roll No:%d having marks less than 35\n",i);
        }
    }
    return 0;
}