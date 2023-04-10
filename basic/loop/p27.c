#include<stdio.h>

int prime(int n){
    int c = 0;
    for(int i = 1;i<=n;i++){
        if(n%i==0){c++;}
    }
    return c==2;
}

int main(){

    int n, c = 0;
    scanf("%d", &n);
    for(int i = 1;i<=n;i++){
        if(prime(i)){
            printf("%d\n", i);
        }
    }
    
    return 0;
}