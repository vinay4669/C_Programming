#include<stdio.h>
#include<math.h>

int armstrong(int n){
    int t, d = 0, s = 0;
    t = n;
    for(;t>0;t/=10, d++);
    t = n;
    for(;t>0;t/=10){
        s += pow(t%10, d);
    }
    return n==s;
}

int main(){

    int a, b;
    printf("Enter starting limit : ");
    scanf("%d", &a);
    printf("Enter last limit : ");
    scanf("%d", &b);
    printf("Armstrong numbers within this limit : \n");
    for(int i = a;i<=b;i++){
        if(armstrong(i)){
        printf("%d, ", i);
        }
    }

    return 0;
}