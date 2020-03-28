#include<stdio.h>

int kaijo(int);

int main(){

    printf("%d! = %d\n", 7, kaijo(7));
    return 0;
}

int kaijo(int n){
    if(n == 0){
        return 1;
    }else{
        return (n * kaijo(n-1));
    }
}