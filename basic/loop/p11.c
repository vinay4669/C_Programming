#include<stdio.h>

int main(){

    int n, f, l;
    scanf("%d", &n);
    l = n%10;
    for(;n>9;n/=10);
    f = n;
    printf("last = %d and first = %d", l, f);

    return 0;
}