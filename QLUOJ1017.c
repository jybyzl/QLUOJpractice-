#include<stdio.h>

int main(int argc,const char*argv[]){
    int n;
    scanf("%d", &n);
    printf("%d %d", n * 10 / 3, n * 10 % 3);
    return 0;
}