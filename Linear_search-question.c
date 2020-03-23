#include <stdio.h>
#include <string.h>

typedef struct{

    char name[10];

    int price;

}Drink;

Drink p[6] = {
{"‚è‚ñ‚²",130},
{"‚¢‚ë‚Í‚·",100},
{"ƒR[ƒ‰",120},
{"…",90},
{"ˆ»‘é",140},
{"BOSS",110}
};


int main(void){


    int num = sizeof(p) / sizeof(p[0]);

    int my_coin;

    int findID = -1;

    printf("‹àŠz‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢");
    scanf("%d",&my_coin);

    
    for( int i = 0; i<=num; i++){

        printf("%d‚Ìˆù‚İ•¨‚Í%s‚Å‚·\n",p[i].price,p[i].name);

        if(my_coin == p[i].price){
             findID = i;
             break;
        }
    }
    printf("¶‚©‚ç%d”Ô–Ú‚É‚ ‚è‚Ü‚·\n",findID+1);
    printf("‹àŠz‚Æˆê’v‚·‚éˆù‚İ•¨‚Í%s‚Å%d‰~‚Å‚·\n",p[findID].name,p[findID].price);

    return 0;

}