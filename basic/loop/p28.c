#include<stdio.h>

int prime(int n){
    int c = 0;
    for(int i = 1;i<=n;i++){
        if(n%i==0){c++;}
    }
    return c==2;
}

int main(){

    int n, c = 0, s = 0;;
    scanf("%d", &n);
    for(int i = 1;i<=n;i++){
        if(prime(i)){
            s += i;
        }
    }
    printf("%d\n", s);
    return 0;
}