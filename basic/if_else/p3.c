#include<stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    if(n>0){
        printf("Positive no.");
    }
    else if(n<0){
        printf("Negative no.");
    }
    else{
        printf("Zero no.");
    }

    return 0;
}