#include<stdio.h>

void sum_of_digits(int n){
    int s = 0;
    for(;n>0;n/=10){
        s += n%10;
    }
    printf("Sum of digits = %d", s);
}

int main(){

    int n;
    scanf("%d", &n);
    sum_of_digits(n);

    return 0;
}