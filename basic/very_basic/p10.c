#include<stdio.h>

int main(){

    int days;
    printf("Enter no. of days : ");
    scanf("%d", &days);
    int years = days / 365;
    days %= 365;
    int weeks = days / 7;
    days %= 7;
    printf("No. of years : %d\n", years);
    printf("No. of weeks : %d\n", weeks);
    printf("No. of days : %d\n", days);

    return 0;
}