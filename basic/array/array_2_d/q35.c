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
            if(i>j){
                sum += a[i][j];
            }
        }
    }
    printf("Sum of lower triangular matrix elements = %d", sum);

    return 0;
}