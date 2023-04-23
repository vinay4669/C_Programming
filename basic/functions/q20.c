#include<stdio.h>

void hcf(int a, int b){
    int t = 0;
    for(;b!=0;){
        t = a;
        a = b;
        b = t % b;
    }
    printf("HCF : %d", a);
}

int main(){

    int a, b;    
    scanf("%d%d", &a, &b);
    hcf(a, b);

    return 0;
}