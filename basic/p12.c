#include<math.h>
#include<stdio.h>

int main(){

    int num;
    float sqr;
    printf("Enter a number : ");
    scanf("%d", &num);
    sqr = sqrt(num);
    printf("Square root of %d is %f", num, sqr);

    return 0;
}