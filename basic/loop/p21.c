#include<stdio.h>

int main(){

    int base, exp, res = 1;
    printf("Enter base value : ");
    scanf("%d", &base);
    printf("Enter exponent value : ");
    scanf("%d", &exp);
    for(;exp--;){
        res *= base;
    }
    printf("%d", res);
    return 0;
}