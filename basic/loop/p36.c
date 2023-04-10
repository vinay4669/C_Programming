#include<stdio.h>

int main(){

    int n, a = 0, b = 0, c = 1;
    scanf("%d", &n);
    for(;n--;){
        printf("%d\n", b);
        a = b+c;
        b = c;
        c = a;
    }

    return 0;
}