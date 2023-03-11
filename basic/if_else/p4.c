#include<stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    if(n%55==0){
        printf("Divisible by 5 and 11");
    }
    else{
        printf("Not divisible by 5 and 11");
    }

    return 0;
}