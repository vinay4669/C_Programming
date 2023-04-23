#include<stdio.h>

void even(int n){
    for(int i = 0;i<=n;i+=2){
        printf("%d ", i);
    }
}

void odd(int n){
    for(int i = 1;i<=n;i+=2){
        printf("%d ", i);
    }
}

int main(){

    int n;
    scanf("%d", &n);
    printf("Even no.s below %d : \n", n);
    even(n);
    printf("\nOdd no.s below %d : \n", n);
    odd(n);

    return 0;
}