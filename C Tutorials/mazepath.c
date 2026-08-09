#include <stdio.h>
int maze(int r,int c,int dr,int dc){
    if(r==dr && c==dc){
        return 1;
    }
    if(r > dr || c > dc){
        return 0;
    }

    return maze(r,c+1,dr,dc) + maze(r+1,c,dr,dc);
}
int main(){
    int r,c;
    printf("Enter number of rows & columns:\n");
    scanf("%d %d",&r,&c);
    int totalpaths = maze(0,0,r-1,c-1);
    printf("Total PAths = %d\n",totalpaths);

}