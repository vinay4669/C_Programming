#include<stdio.h>

void palin(int n){
    int r = 0, t = n;
    for(;n>0;n/=10){
        r = r * 10 + n % 10;
    }
    if(t==r){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
}

int main(){

    int n;
    scanf("%d", &n);
    palin(n);

    return 0;
}