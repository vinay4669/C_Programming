#include<stdio.h>

int prime(int n){
    int c = 0;
    for(int i = 1;i<=n;i++){
        if(n%i==0){c++;}
    }
    return c==2;
}

int main(){

    int a, b;
    printf("Enter starting limit : ");
    scanf("%d", &a);
    printf("Enter last limit : ");
    scanf("%d", &b);
    printf("Prime numbers within this limit : \n");
    for(int i = a;i<=b;i++){
        if(prime(i)){
            printf("%d, ", i);
        }
    }

    return 0;
}