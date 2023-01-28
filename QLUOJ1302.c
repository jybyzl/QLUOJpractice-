#include<stdio.h>

int main(int argc,const char*argv[]){
    int number, a, b, c;
    scanf("%d", &number);
    a = number / 100;
    b = number / 10 % 10;
    c = number % 10;
    printf("%d", c * 100 + b * 10 + a);
    return 0;
}