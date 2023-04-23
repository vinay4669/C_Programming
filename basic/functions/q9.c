#include<stdio.h>

int perfect(int n){
    int s = 0;
    for(int i = 1;i<n;i++){
        if(n%i==0){
            s += i;
        }
    }
    return n==s;
}

int main(){

    int a, b;
    printf("Enter starting limit : ");
    scanf("%d", &a);
    printf("Enter last limit : ");
    scanf("%d", &b);
    printf("Perfect numbers within this limit : \n");
    for(int i = a;i<=b;i++){
        if(perfect(i)){
        printf("%d, ", i);
        }
    }

    return 0;
}