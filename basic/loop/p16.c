#include<stdio.h>

int main(){

    int n, r = 0;
    scanf("%d", &n);
    for(;n>0;n/=10){
        r = r * 10 + n % 10;
    }
    printf("%d", r);

    return 0;
}