#include<stdio.h>

void lcm(int a, int b){
    int t = 0, c = a, d = b;
    for(;b!=0;){
        t = a;
        a = b;
        b = t % b;
    }
    int lcm = c * d / a;
    printf("LCM : %d", lcm);
}

int main(){

    int a, b;    
    scanf("%d%d", &a, &b);
    lcm(a, b);

    return 0;
}