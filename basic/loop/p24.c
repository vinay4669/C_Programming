#include<stdio.h>

int main(){

    int a, b, t;    
    scanf("%d%d", &a, &b);
    for(;b!=0;){
        t = a;
        a = b;
        b = t % b;
    }
    printf("HCF : %d", a);

    return 0;
}