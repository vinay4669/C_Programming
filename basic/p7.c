#include<stdio.h>

int main(){

    int cm;
    printf("Enter length in centimeters : ");
    scanf("%d", &cm);
    int m = cm/100;
    int km = m/1000;
    printf("In meters : %d\n", m);
    printf("In kilometers : %d", km);

    return 0;
}