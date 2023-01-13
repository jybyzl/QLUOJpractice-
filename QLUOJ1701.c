#include<stdio.h>

int main(int argc,const char*argv[]){
    int contC[5] = {0}, sumFootBall = 0, rank = 1;
    int judgement, master, guest;
    int n = 3;
    int o = 1;
    int judge = 0;
    while ( n-- ){
        scanf("%d %d %d", &judgement, &master, &guest);
        if( master + guest > 90 * 60 ){
            judge = 1;
        }
        if( judgement == 1 ){
            sumFootBall = sumFootBall + (master - guest);
            if( master > guest ){
                contC[0] += 3;
            }else if( master == guest ){
                contC[0] += 1;
                contC[o] += 1;
            }else{
                contC[o] += 3;
            }
        }else{
            sumFootBall = sumFootBall + (guest - master);
            if (master > guest){
                contC[o] += 3;
            }else if (master == guest){
                contC[0] += 1;
                contC[o] += 1;
            }else{
                contC[0] += 3;
            }
        }
        o++;
    }
    int i;
    for ( i = 1; i < 5; i++ ){
        if( contC[0] == contC[i]){
            rank = 0;
            break;
        }else if( contC[0] < contC[i] ){
            rank++;
        }
    }
    if( judge == 0 ){
        printf("%d\n%d %d", rank, contC[0], sumFootBall);
    }else{
        printf("The players are exhausted！");
    }
    return 0;
}