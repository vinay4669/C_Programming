#include<stdio.h>

int cube(int n){
    return n*n*n;
}

int main(){

    int n, res;
    scanf("%d", &n);
    res = cube(n);
    printf("Cube of %d = %d", n, res);

    return 0;
}