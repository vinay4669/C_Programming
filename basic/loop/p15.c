#include<stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    int p = 1;
    for(;n>0;n/=10){
        p *= n%10;
    }
    printf("%d", p);

    return 0;
}