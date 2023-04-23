#include<stdio.h>

void factorial(int n){
    int f = 1;
    for(int i = 1;i<=n;i++){
        f *= i;
    }
    printf("Factorial of %d = %d", n, f);
}

int main(){

    int n;
    scanf("%d", &n);
    factorial(n);

    return 0;
}