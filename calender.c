#include<stdio.h>

void getYMonth(int *,int *);
int getMonthDays(int,int);
int getWeekDay(int,int,int);
void printCalender(int, int);


int main(int argc,char *argv[]){
    int year, month, days, youbi;

    getYMonth(&year, &month);
    days = getMonthDays(year, month);
    youbi = getWeekDay(year, month, 1);
    //start form 1 day

    printCalender(days, youbi);
    return 0;
}

void getYMonth(*py, *pm){
    printf("入力　年　月\n");

    while(1){
        scanf("%d %d",py, pm);
        if (*pm >= 1 || *pm <= 12){
            break;
        }
        printf("入力間違え");
    }
    return;
}

int getMonthDays(int y, int m){
    int dm;

    switch(m){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            dm = 31;
            break;
        case 4: case 6: case 9: case 11:
            dm = 30;
            break;
        case 2:
            if(y % 4 == 0 && y % 100 != 0 || y % 400 == 0){
                dm = 29;
            }else{
                dm = 28;
            }
            break;
        default:
            dm = 0;
    }
    return dm;
}

//何曜日スタートか　日曜日 = 0から
int getWeekDay(int y, int m, int d){
    int w;

    if(m == 1 || m == 2){
        y--;
        m += 12;
    }
    w = (y + y/4 - y/100 + y/400 + (13*m + 8)/5 +d) % 7;
    return w;
}

void printCalender(int dm, int dw){
    int n,d;

    printf(" Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");
    printf("------------------------------------\n");

    for (n = 0; n < dw; n++){
        printf("     ");
    }
    for (d = 1; d <= dm; d++){
        printf("   %2d", d);
        if(n % 7 == 6 && d != dm){
            printf("\n");
        }
        n++;
    }
    printf("\n----------------------------------\n");
    return;
}