#include<stdio.h>

int sum_even(int n){
    int sum = 0;
    for(int i = 0;i<=n;i+=2){
        sum += i;
    }
    return sum;
}

int sum_odd(int n){
    int sum = 0;
    for(int i = 1;i<=n;i+=2){
        sum += i;
    }
    return sum;
}

int main(){

    int n;
    scanf("%d", &n);
    printf("Sum of even no.s below %d = %d\n", n, sum_even(n));
    printf("Sum of odd no.s below %d  = %d\n", n, sum_odd(n));

    return 0;
}