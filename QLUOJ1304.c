#include<stdio.h>

int main(int argc,const char*argv[]){
    double C;
    scanf("%lf", &C);
    printf("%.2f", 5.0 * (C - 32.0) / 9.0);
    return 0;
}