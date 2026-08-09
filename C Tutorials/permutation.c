#include <stdio.h>
#include <string.h>
void swap(char *x,char *y){
    char temp = *x;
    *x = *y;
    *y = temp;
}

void permutation(char str[],int l,int r){
    if(l==r){
        printf("%s\n",str);
        return;
    }
    for (int i = l; i <= r; i++)
    {
        
        swap(&str[l],&str[i]);
        
        permutation(str,l+1,r);
        
        swap(&str[l],&str[i]);
    }
    
}
int main(){
    char str[15];
    fgets(str,15,stdin);
    int n= strlen(str);
    printf("All Permutations:\n");
    permutation(str,0,n-1);
    return 0;
}