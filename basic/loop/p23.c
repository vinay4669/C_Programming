#include<stdio.h>

int main(){

    int n, f = 1;
    scanf("%d", &n);
    for(;n;n--){
        f *= n;
    }
    printf("%d", f);

    return 0;
}