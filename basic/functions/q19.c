#include<stdio.h>

void fibonacci(int n){
    int a = 0, b = 0, c = 1;
    for(int i = 1;i<n;i++){
        a = b+c;
        b = c;
        c = a;
    }
    printf("Term number %d of fibonacci series = %d", n, b);
}

int main(){

    int n;
    scanf("%d", &n);
    fibonacci(n);

    return 0;
}