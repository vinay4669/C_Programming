#include<stdio.h>

int main(){

    int a, b, c, d, e;
    float total, avg, per;
    printf("Enter marks of 5 subjects : ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    total = a + b + c + d + e;
    avg = total/5;
    per = avg;
    printf("Total marks : %f\n", total);
    printf("Average marks : %f\n", avg);
    printf("Percentahge  : %f%%", per);

    return 0;
}