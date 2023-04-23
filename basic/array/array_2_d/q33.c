#include<stdio.h>

int main(){

    int r, c;
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
    printf("Lower triangular matrix : \n");
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            if(i>j){
                printf("%d\t", a[i][j]);
            }
            else{
                printf("\t");
            }
        }
        printf("\n");
    }

    return 0;
}