#include <stdio.h>
#include <string.h>

typedef struct{

    char name[10];

    int price;

}Drink;

Drink p[6] = {
{"���",130},
{"����͂�",100},
{"�R�[��",120},
{"��",90},
{"����",140},
{"BOSS",110}
};


int main(void){


    int num = sizeof(p) / sizeof(p[0]);

    int my_coin;

    int findID = -1;

    printf("���z����͂��Ă�������");
    scanf("%d",&my_coin);

    
    for( int i = 0; i<=num; i++){

        printf("%d�̈��ݕ���%s�ł�\n",p[i].price,p[i].name);

        if(my_coin == p[i].price){
             findID = i;
             break;
        }
    }
    printf("������%d�Ԗڂɂ���܂�\n",findID+1);
    printf("���z�ƈ�v������ݕ���%s��%d�~�ł�\n",p[findID].name,p[findID].price);

    return 0;

}