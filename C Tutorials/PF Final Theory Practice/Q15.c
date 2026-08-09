#include <stdio.h>
int main(){
int arr[5];
int even=0, odd=0;

for(int i=0;i<5;i++){
    scanf("%d", &arr[i]);
    if(arr[i]%2==0)
        even++;
    else
        odd++;
}

printf("Even = %d\nOdd = %d", even, odd);
return 0;
}