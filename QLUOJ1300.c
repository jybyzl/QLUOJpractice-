#include <stdio.h>
int main(int argc,const char*argv[])
{
    int x;
    scanf("%d", &x);
    printf("%d %d", x * 10 / 3, x * 10 % 3);
    return 0;
}