#include <stdio.h>
int main (){
    float CGPA,income;
    printf("Enter the CGPA and family income:\n");
    scanf("%f %f",&CGPA,&income);
    if(CGPA>3.5){
        if(income<40000){
            printf("You are rewarded with full Scholarship!");
        }
    }else if(CGPA>3.0){
        printf("You are rewarded with half Scholarship!");
    }else printf("Sorry! No Scholarship");
    return 0;
}