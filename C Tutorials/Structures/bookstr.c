#include <stdio.h>
#include <string.h>
struct Books
{
    char name[30];
    int nofpages;
    float price;
}a,b,c;

int main () {
    a.nofpages = 180;
    a.price = 1000;
    strcpy(a.name,"Secret Seven");
    printf("Name:%s\n",a.name);
    printf("Price:%.2f\n",a.price);
    printf("Number of pages:%d\n",a.nofpages);

    b.nofpages = 670;
    b.price = 2500;
    strcpy(b.name,"Harry Potter");
    printf("Name:%s\n",b.name);
    printf("Price:%.2f\n",b.price);
    printf("Number of pages:%d\n",b.nofpages);

    c.nofpages = 1500;
    c.price = 4000;
    strcpy(c.name,"Osman Ghazi");
    printf("Name:%s\n",c.name);
    printf("Price:%.2f\n",c.price);
    printf("Number of pages:%d\n",c.nofpages);
    return 0;
}