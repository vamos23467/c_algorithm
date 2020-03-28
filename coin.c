#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
    int you;
    int coin;
    char muki[][10] = {"","表","裏"};

    srand(time(NULL));
    printf("入力してください\n");

    while(1){
        coin = rand() % 2 + 1;
        scanf("%d", &you);

        if(you < 1 || you > 2){
            break;
        }else{
            printf("%s %s \n", muki[you], muki[coin]);
            printf("%s \n", (you == coin) ? "あたり" : "外れ");

        }
        printf("\n");
    }
    return 0;
}