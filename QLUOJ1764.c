#include<stdio.h>

int main(int argc,const char*argv[]){
    long long int n;
    double i;
    int up = 0, down = 0;
    scanf("%lld ", &n);
    while(n != 1){
        i = n;
        printf("%lld ", n);
        if (n % 2 == 0){
            n /= 2;
        }else{
            n = n * 3 + 1;            
        }
        if (n > i){
            up++;
        }else{
            down++;
        }
    }
    printf("1 \n%d %d", up, down);
    return 0;
}