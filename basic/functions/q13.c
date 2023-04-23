#include<stdio.h>

int sum_natural(int n){
    int sum = 0;
    for(int i = 1;i<=n;i++){
        sum += i;
    }
    return sum;
}

int main(){

    int n;
    scanf("%d", &n);
    printf("Sum of no.s below %d = %d", n, sum_natural(n));

    return 0;
}