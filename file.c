#include<stdio.h>

int main(int argc, char *argv[]){

    FILE  *fp;
    char s[256];
    int i = 1;

    fp = fopen("abc.txt","r");

    if (fp == NULL){
        return 1;
    }else{
        while(feof(fp) == 0){
            fgets(s,255,fp);
            printf("%s",s);
            i++;
        }
    }
    fclose(fp);
    return 0;
}