#include<stdio.h>

int main(){

    int r, c, sum = 0;
    printf("Enter no. of rows in matrix : ");
    scanf("%d", &r);
    printf("Enter no. of columns in matrix : ");
    scanf("%d", &c);
    int a[r][c];
    for(int i = 0;i<r;i++){
        printf("Enter values of row %d : \n", i+1);
        for(int j = 0;j<c;j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            sum += a[i][j];
        }
        printf("Sum of row %d = %d\n", i, sum);
        sum = 0;
    }
    for(int i = 0;i<c;i++){
        for(int j = 0;j<r;j++){
            sum += a[j][i];
        }
        printf("Sum of column %d = %d\n", i, sum);
        sum = 0;
    }

    return 0;
}