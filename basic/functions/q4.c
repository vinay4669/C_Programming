#include<stdio.h>

void evenORodd(int n){
    if(n%2==0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
}

int main(){

    int n;
    scanf("%d", &n);
    evenORodd(n);

    return 0;
}