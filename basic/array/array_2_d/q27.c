#include<stdio.h>

int main(){

    int r1, c1, r2, c2;
    printf("Matrix 1 : \n");
    printf("Enter no. of rows in first matrix : ");
    scanf("%d", &r1);
    printf("Enter no. of columns in first matrix : ");
    scanf("%d", &c1);
    int a[r1][c1];
    for(int i = 0;i<r1;i++){
        printf("Enter values of row %d : \n", i+1);
        for(int j = 0;j<c1;j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("Matrix 2 : \n");
    printf("Enter no. of rows in second matrix : ");
    scanf("%d", &r2);
    printf("Enter no. of columns in second matrix : ");
    scanf("%d", &c2);
    int b[r2][c2];
    for(int i = 0;i<r2;i++){
        printf("Enter values of row %d : \n", i+1);
        for(int j = 0;j<c2;j++){
            scanf("%d", &b[i][j]);
        }
    }
    int res = 1;
    if(r1==r2 && c1==c2){
        for(int i = 0;i<r1;i++){
            for(int j = 0;j<c1;j++){
                if(a[i][j]!=b[i][j]){
                    res = 0;
                    break;
            }
            
        }
        if(!res)break;
    }
    }
    else{
        res = 0;
    }
    if(res){
        printf("Both are equal");
    }
    else{
        printf("Both are unequal");
    }

    return 0;
}