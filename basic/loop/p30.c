#include<stdio.h>
#include<math.h>

int main(){

    int n, t, d = 0, s = 0;
    scanf("%d", &n);
    t = n;
    for(;t>0;t/=10, d++);
    t = n;
    for(;t>0;t/=10){
        s += pow(t%10, d);
    }
    if(n==s){
        printf("Armstrong");
    }
    else{
        printf("Not Armstrong");
    }

    return 0;
}