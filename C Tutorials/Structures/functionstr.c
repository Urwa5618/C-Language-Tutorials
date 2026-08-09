#include <stdio.h>
#include <string.h>
#include <stdbool.h>
typedef struct pokemon
    {
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    } pokemon;
void fun(pokemon p1){
    printf("%d",p1.hp);
}
int main (){
    pokemon p1;
    p1.hp = 80;
    fun(p1);
    return 0;
}