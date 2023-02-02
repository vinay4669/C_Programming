#include"math.h"
#include<stdio.h>

int main(){

    int x, y, res;
    printf("Enter values of x and y : ");
    scanf("%d %d", &x, &y);
    res = pow(x, y);
    printf("%d^%d = %d", x, y, res);

    return 0;
}