#include<math.h>
#include<stdio.h>

int main(){

    float p, t, r, ci;
    printf("Enter Principal : ");
    scanf("%f", &p);
    printf("Enter Time in years : ");
    scanf("%f", &t);
    printf("Enter Rate of Interest : ");
    scanf("%f", &r);
    ci = (p * (pow((1+(r/100)), t))) - p;
    printf("Compound Interst = Rs. %f", ci);

    return 0;
}