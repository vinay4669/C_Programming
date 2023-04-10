#include<stdio.h>

int factorial(int n){
    int f = 1;
    for(int i = 1;i<=n;i++){
        f *= i;
    }
    return f;
}

int main(){

    int n, t, s = 0;
    scanf("%d", &n);
    t = n;
    for(;n>0;n/=10){
        s += factorial(n%10);
    }
    if(t==s){
        printf("Strong number");
    }
    else{
        printf("Not a Strong number");
    }

    return 0;
}