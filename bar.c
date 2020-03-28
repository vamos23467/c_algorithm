#include<stdio.h>

int main(int argc, char *argv[]){

    int a[] = {2,3,4,7,8};
    int i,j;

    for (j = 0; j < (sizeof(a) / sizeof(int)); j++){
        printf("a[%d]=%d", j, a[j]);

        for (i = 1; i <= a[j]; i++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}