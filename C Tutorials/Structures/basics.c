#include <stdio.h>
int main () {
    struct pokemon
    { //user defined data type 
        int hp;
        int speed;
        int attack;
        char tier;
    };
    
    struct pokemon pikachu;
    pikachu.attack = 80;
    pikachu.speed = 100;
    pikachu.hp = 1000;
    pikachu.tier = 'P';
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.speed);
    printf("%c\n",pikachu.tier);

    struct pokemon charizard;
    charizard.attack = 84;
    charizard.speed = 98;
    charizard.hp = 1028;
    charizard.tier = 'C';
    printf("%d\n",charizard.attack);
    printf("%d\n",charizard.hp);
    printf("%d\n",charizard.speed);
    printf("%c\n",charizard.tier);
    
    struct pokemon meouto;
    meouto.attack = 104;
    meouto.speed = 110;
    meouto.hp = 890;
    meouto.tier = 'M';
    printf("%d\n",meouto.attack);
    printf("%d\n",meouto.hp);
    printf("%d\n",meouto.speed);
    printf("%c\n",meouto.tier);
    
    return 0;
}