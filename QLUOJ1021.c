#include<stdio.h>

int main(int argc,const char*argv[]){
    double F;
    scanf("%lf", &F);
    printf("%.2f", 5 * (F - 32) / 9);
    return 0;
}