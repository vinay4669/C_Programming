#include<stdio.h>

int main(){

    int l, b;
    printf("Enter length : ");
    scanf("%d", &l);
    printf("Enter breadth : ");
    scanf("%d", &b);
    int area = 2*(l+b);
    printf("Perimeter = %d", area);

    return 0;
}