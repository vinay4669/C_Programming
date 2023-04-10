#include<stdio.h>

int main(){

    int n, c = 0;
    scanf("%d", &n);
    do{
        c++;
        n/=10;
    }while(abs(n)>0);
    printf("no. of digits = %d", c);

    return 0;
}