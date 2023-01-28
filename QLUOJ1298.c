#include<stdio.h>

int main(int argc,const char*argv[]){
    int x, y;
    scanf("%d %d", &x, &y);
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("%d %d", x, y);
    return 0;
}