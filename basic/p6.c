#include<stdio.h>

int main(){

    int r;
    printf("Enter the radius of circle : ");
    scanf("%d", &r);
    float pi = 3.14;
    int dia = 2 * r;
    float circum = pi * dia;
    float area = pi * r * r;
    printf("Diameter = %d\n", dia);
    printf("Circumference = %f\n", circum);
    printf("Area = %f", area);

    return 0;
}