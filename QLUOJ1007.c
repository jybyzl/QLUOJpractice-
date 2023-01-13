#include<stdio.h>

int sum(int n);

int main( int argc, const char*argv[] ){
    int n;
    while( scanf("%d" ,&n ) != EOF ){
        int sum = 0;
        int i;
        for ( i = 1; i <= n; i++ ){
            sum += i;
        }
        printf("%d\n\n", sum);

        // int y = sum(n);
        // printf("%d", y);

        // printf("%d\n\n", n * (n + 1) / 2);
    }

    return 0;
}

int sum( int n ){
    if ( n == 1 ){
        return 1;
    }else{
        return sum(n - 1) + n;
    }
}