#include<stdio.h>

int main(int argc,const char*argv[]){

    // int n;
    // while ( scanf("%d",&n) != EOF )
    // {
    //     int sum;
    //     int i;
    //     for ( i = 1; i <= n; i++ ){
    //         sum += i;
    //     }
    //     printf("%d\n", sum);
    //     sum = 0;
    // }
    // return 0;

    int n;
    while (scanf("%d",&n) != EOF)
    {
        printf("%d\n", sum(n));
    }
    return 0;
}

int sum(int n){


    if( n == 1 ){
        return 1;
    }else{
        return sum(n - 1) + n;
    }
}