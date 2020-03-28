#include<stdio.h>

int main(int argc,char *argv[]){
    int i,n = 0;

    for (i = 1; i <= 10; i++)
        n += i;
    printf("%d\n",n);
    return 0;
}