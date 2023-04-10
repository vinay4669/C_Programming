#include<stdio.h>

int main(){

    int a, b, t, c, d;    
    scanf("%d%d", &a, &b);
    c = a;d = b;
    for(;b!=0;){
        t = a;
        a = b;
        b = t % b;
    }
    int lcm = c * d / a;
    printf("LCM : %d", lcm);

    return 0;
}