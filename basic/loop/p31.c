#include<stdio.h>
#include<math.h>

int armstrong(int n){
    int d = 0, s = 0, t = n;
    for(;t>0;t/=10, d++);
    t = n;
    for(;t>0;t/=10){
        s += pow(t%10, d);
    }
    return n==s;
}

int main(){

    int n;
    scanf("%d", &n);
    for(int i = 1;i<=n;i++){
        if(armstrong(i)){
            printf("%d\n", i);
        }
    }

    return 0;
}