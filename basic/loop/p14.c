#include<stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    int s = 0;
    for(;n>0;n/=10){
        s += n%10;
    }
    printf("%d", s);

    return 0;
}