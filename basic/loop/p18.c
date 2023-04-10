#include<stdio.h>

int main(){

    int n, t, c = 0;
    scanf("%d", &n);
    for(int i = 0;i<=9;i++){
        t = n;
        for(;t>0;t/=10){
            if(i==t%10){c++;}
        }
        printf("Occurence of %d : %d\n", i, c);
        c = 0;
    }

    return 0;
}