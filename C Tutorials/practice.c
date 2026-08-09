#include <stdio.h>
#include <string.h>
typedef struct Point
{
    int x,y;
}Point;
void updatepoint(Point *p){
    printf("Enter new x and y values:\n");
    scanf("%d %d",&p->x,&p->y);
    printf("X:%d Y:%d",p->x,p->y);
}
int main () {
    Point p;
    printf("Enter x and y:\n");
    scanf("%d %d",&p.x,&p.y);
    updatepoint(&p);
    return 0;
}