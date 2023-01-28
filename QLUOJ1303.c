#include <stdio.h>

int main(int argc, const char *argv[]){
    double t = 3.1415926;
    double r, h;
    scanf("%lf %lf", &r, &h);
    printf("%.2f %.2f %.2f %.2f", 2 * t * r, t * r * r, 2 * t * r * h, t * r * r * h);
    return 0;
}