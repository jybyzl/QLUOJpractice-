#include<stdio.h>

int main(int argc,const char*argv[]){
    int i, f;
    for (i = 1; i <= 6; i++){
        for (f = 0; f < i; f++){
            printf("#");
        }
        printf("\n");
    }
    return 0;
}