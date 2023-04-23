#include<stdio.h>

int main(){

    int r, c;
    printf("Enter no. of rows in matrix : ");
    scanf("%d", &r);
    printf("Enter no. of columns in matrix : ");
    scanf("%d", &c);
    int a[r][c], sum = 0;
    for(int i = 0;i<r;i++){
        printf("Enter values of row %d : \n", i+1);
        for(int j = 0;j<c;j++){
            scanf("%d", &a[i][j]);
            if(i+j==r-1) sum += a[i][j];
        }
    }
    printf("Sum of minor diagonal = %d", sum);

    return 0;
}