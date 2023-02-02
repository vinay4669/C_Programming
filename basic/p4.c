#include<stdio.h>

int main(){

    int l, b;
    printf("Enter length : ");
    scanf("%d", &l);
    printf("Enter breadth : ");
    scanf("%d", &b);
    int per = 2*(l+b);
    printf("Perimeter = %d", per);

    return 0;
}