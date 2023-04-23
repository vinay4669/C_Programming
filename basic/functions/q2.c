#include<stdio.h>

float diameter(float r){
    return 2*r;
}

float circumference(float r){
    return 2 * 3.14 * r;
}

float area(float r){
    return 3.14 * r * r;
}

int main(){

    float r;
    printf("Enter the radius : ");
    scanf("%f", &r);
    printf("Diameter = %f\n", diameter(r));
    printf("Circumference = %f\n", circumference(r));
    printf("Area of circle = %f", area(r));

    return 0;
}