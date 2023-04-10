#include<stdio.h>

int main(){

    int n, r = 0, t;;
    scanf("%d", &n);
    t = n;
    for(;n>0;n/=10){
        r = r * 10 + n % 10;
    }
    if(r==t){
        printf("Palindrome");
    }
    else{
        printf("Not palindrome");
    }

    return 0;
}