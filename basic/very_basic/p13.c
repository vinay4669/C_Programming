#include<stdio.h>

int main(){

    float a, b, c;
    printf("Enter two angle of a triangle : ");
    scanf("%f %f", &a, &b);
    c = 180 - a - b;
    printf("Third angle = %f", c);

    return 0;
}