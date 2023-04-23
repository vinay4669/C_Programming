#include<stdio.h>

void reverse(int n){
    int r = 0;
    for(;n>0;n/=10){
        r = r * 10 + n % 10;
    }
    printf("Reverse = %d", r);
}

int main(){

    int n;
    scanf("%d", &n);
    reverse(n);

    return 0;
}