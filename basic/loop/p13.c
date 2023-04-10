#include<stdio.h>
#include<math.h>

int main(){

    int n, f, l, c = 0, t;
    scanf("%d", &n);
    t = n;
    l = n%10;
    for(;n>9;n/=10){
        c++;
    }
    f = n;
    int res = (l * (int)pow(10, c)) + ((t % (int)pow(10, c) / 10) * 10) + f;
    printf("%d", res);
    return 0;
}