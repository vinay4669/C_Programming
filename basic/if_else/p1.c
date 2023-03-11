#include<stdio.h>

int main(){

    int a, b, m;
    scanf("%d%d", &a, &b);
    if(a>b){
        m = a;
    }
    else{
        m = b;
    }
    printf("Max of them = %d", m);

    return 0;
}