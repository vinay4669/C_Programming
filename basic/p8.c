#include<stdio.h>

int main(){

    float cel;
    printf("Enter temperature in celsius : ");
    scanf("%f", &cel);
    float fah = cel * 1.8 + 32;
    printf("Temperatue in fahrenheit : %f", fah);

    return 0;
}