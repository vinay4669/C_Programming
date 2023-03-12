#include<stdio.h>
#include "math.h"

int main(){

    float a, b, c, d, x1, x2;
    scanf("%f%f%f", &a, &b, &c);
    d = (b*b) - (4*a*c);
    switch(d>0){
        case 1:
            x1  = (-b+sqrt(d))/(2*a);
            x2  = (-b-sqrt(d))/(2*a);
            printf("Roots are %f and %f", x1, x2);
            break;
        case 0:
            switch(d<0){
                case 1:printf("Invalid quadratic equation");break;
                case 0:
                    x1 = x2 = -b/2*a;
                    printf("Roots are %f and %f", x1, x2);
            }
    }

    return 0;
}