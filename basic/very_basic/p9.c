#include<stdio.h>

int main(){

    float fah;
    printf("Enter temperature in fahrenheit : ");
    scanf("%f", &fah);
    float cel = (fah - 32) / 1.8;
    printf("Temperatue in celsius : %f", cel);

    return 0;
}