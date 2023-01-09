#include<stdio.h>

int main(int argc,const char*argv[]){

    int n;
    while ( scanf("%d",&n) != EOF )
    {
        int sum;
        int i;
        for ( i = 1; i <= n; i++ ){
            sum += i;
        }
        printf("%d\n", sum);
        sum = 0;
    }
    return 0;
}