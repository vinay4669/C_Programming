#include<stdio.h>

int main(){

    float p, t, r, si;
    printf("Enter Pricipal : ");
    scanf("%f", &p);
    printf("Enter Time in years : ");
    scanf("%f", &t);
    printf("Enter Rate of Interest : ");
    scanf("%f", &r);
    si = p * r * t / 100;
    printf("Simple Interst = Rs. %f", si);

    return 0;
}