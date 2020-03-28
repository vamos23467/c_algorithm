#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[]){
    int i,n;

    char a[] = "abcdefgh";
    char b[11];

    n = strlen(a);

    for (i = n-1; i >= 0; i--){
        b[n-1-i] = a[i];
    }
    b[n] = '\0';
    printf("逆読み%s\n", b);
    return 0;
}