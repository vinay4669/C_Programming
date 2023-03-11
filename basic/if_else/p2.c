#include<stdio.h>

int main(){

    int a, b, c, m;
    scanf("%d%d%d", &a, &b, &c);
    if(a>b && a>c){
        m = a;
    }
    else if(b>c && b>a){
        m = b;
    }
    else{
        m = c;
    }
    printf("Max of them = %d", m);

    return 0;
}