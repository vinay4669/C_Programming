#include<stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    for(int i = 0;i<n;i++){
        for(int j = 1;j<=i;j++){
            printf(" ");
        }
        for(int j = 1;j<=n-i;j++){
            if(i==0 || j==1 || j==n-i){printf("*");}
            else{printf(" ");}
        }
        printf("\n");
    }

    return 0;
}