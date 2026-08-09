#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main (){
    typedef struct pokemon
    {
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    } pokemon;
    typedef struct legendarypokemon
    {
        pokemon normal;
        char ability[10];
    } legendarypokemon;

    legendarypokemon mewtwo;
    
    strcpy(mewtwo.ability,"Pressure on opponent");
    
    mewtwo.normal.attack = 180;
    
    mewtwo.normal.hp = 100;
    
    mewtwo.normal.speed = 56;
    
    strcpy(mewtwo.normal.name,"Mewtwo");
    
    mewtwo.normal.tier = 'A';
    
    printf("HP:%d\n",mewtwo.normal.hp);
    printf("Speed:%d\n",mewtwo.normal.speed);
    printf("Attack:%d\n",mewtwo.normal.attack);
    printf("Tier:%c\n",mewtwo.normal.tier);


    return 0;
}