#include<stdio.h>

int main(){

    int a, b, c;
    scanf("%d%d", &a, &b);
    c = a>b;
    switch(c){
        case 1:printf("Max = %d", a);break;
        case 0:printf("Max = %d", b);
    }

    return 0;
}