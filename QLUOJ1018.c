#include<stdio.h>

int main(int argc,const char*argv[]){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    double p = (a + b + c) / 3.0;
    printf("%d %d %.2f", a + b + c, a * b * c, p);
    return 0;
}