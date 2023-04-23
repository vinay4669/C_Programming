#include<stdio.h>
#include<math.h>

void prime(int n){
    int c = 0;
    for(int i = 1;i<=n;i++){
        if(n%i==0){c++;}
    }
    if(c==2){
        printf("Prime\n");
    }
    else{
        printf("Not Prime\n");
    }
}

void armstrong(int n){
    int t, d = 0, s = 0;
    t = n;
    for(;t>0;t/=10, d++);
    t = n;
    for(;t>0;t/=10){
        s += pow(t%10, d);
    }
    if(n==s){
        printf("Armstrong\n");
    }
    else{
        printf("Not Armstrong\n");
    }
}

void perfect(int n){
    int s = 0;
    for(int i = 1;i<n;i++){
        if(n%i==0){
            s += i;
        }
    }
    if(n==s){
        printf("Perfect number\n");
    }
    else{
        printf("Not a perfect number\n");
    }
}

int main(){

    int n;
    scanf("%d", &n);
    prime(n);
    armstrong(n);
    perfect(n);

    return 0;
}