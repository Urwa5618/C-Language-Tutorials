#include <stdio.h>
#include <string.h>
struct Time
{
    int h,m,s;
};
struct event
{
    char title[50];
    struct Time t;
};
void Show(struct event e){
    printf("Event Title:%s\nTime:%0dh:%0dm:%0ds",e.title,e.t.h,e.t.m,e.t.s);
}
int main(){
    struct event e;
    printf("Enter event title and Time(h,m,s):\n");
    scanf("%s %d %d %d\n",e.title,&e.t.h,&e.t.m,&e.t.s);
    
    Show(e);
    return 0;
}