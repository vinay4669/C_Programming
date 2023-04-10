#include<stdio.h>

int factorial(int n){
    int f = 1;
    for(int i = 1;i<=n;i++){
        f *= i;
    }
    return f;
}

int strong(int n){
    int s = 0, t = n;
    for(;n>0;n/=10){
        s += factorial(n%10);
    }
    return t==s;
}

int main(){

    int n;
    scanf("%d", &n);
    for(int i = 1;i<=n;i++){
        if(strong(i)){
        printf("%d\n", i);
    }
    }
    

    return 0;
}