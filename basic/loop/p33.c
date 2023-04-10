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

    int n, s = 0;
    scanf("%d", &n);
    for(int i = 1;i<n;i++){
        if(perfect(i)){
        printf("%d\n", i);
    }
    }

    return 0;
}