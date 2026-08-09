#include <stdio.h>
#include <string.h>
struct Date
{
    int day,month,year;
};
struct Book
{
    int id;
    char title[15];
    struct Date d;
};
int main () {
    struct Book b[3];
    for (int i=0;i<3;i++){
        scanf("%d %s %d %d %d",&b[i].id,b[i].title,&b[i].d.day,&b[i].d.month,&b[i].d.year);
    }
    char key[30];
    printf("Search Title:\n");
    scanf("%s",key);
    for(int i=0;i<3;i++){
        if(strcmp(b[i].title,key)==0){
            printf("Found! Published:%d-%d-%d\n",b[i].d.day,b[i].d.month,b[i].d.year);
            return 0;
        }
    }
    printf("Not Found!");
    return 0;
}