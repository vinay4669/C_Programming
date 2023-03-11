#include<stdio.h>

int main(){

    int side;
    float area;
    printf("Enter side of the equilateral triangle : ");
    scanf("%d", &side);
    area = 1.732/4*side*side;
    printf("Area = %f", area);

    return 0;
}