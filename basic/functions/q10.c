#include<stdio.h>
#include<math.h>

int power(int b, int e){
    return pow(b, e);
}

int main(){

    int b, e, res = 0;
    printf("Enter base value : ");
    scanf("%d", &b);
    printf("Enter exponent : ");
    scanf("%d", &e);
    res = power(b, e);
    printf("%d ^ %d = %d", b, e, res);

    return 0;
}