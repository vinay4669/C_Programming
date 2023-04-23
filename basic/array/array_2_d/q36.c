#include<stdio.h>

int main(){

    int r, c;
    printf("Enter no. of rows in matrix : ");
    scanf("%d", &r);
    printf("Enter no. of columns in matrix : ");
    scanf("%d", &c);
    int a[r][c], t[c][r];
    for(int i = 0;i<r;i++){
        printf("Enter values of row %d : \n", i+1);
        for(int j = 0;j<c;j++){
            scanf("%d", &a[i][j]);
            t[j][i] = a[i][j];
        }
    }
    printf("Original matrix : \n");
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("Transpose matrix : \n");
    for(int i = 0;i<c;i++){
        for(int j = 0;j<r;j++){
            printf("%d\t", t[i][j]);
        }
        printf("\n");
    }

    return 0;
}