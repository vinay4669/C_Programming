#include<stdio.h>

int main(){

    int n, res = 1;
    printf("Enter the order of matrix : ");
    scanf("%d", &n);
    int a[n][n];
    for(int i = 0;i<n;i++){
        printf("Enter elements of row %d : ", i);
        for(int j = 0;j<n;j++){
            scanf("%d", &a[i][j]);
            if(i==j){
                if(a[i][j]!=1){res = 0;}
            }
            else{
                if(a[i][j]!=0){res = 0;}
            }
        }
    }
    if(res){
        printf("Identity matrix");
    }
    else{
        printf("Not an Identity matrix");
    }

    return 0;
}