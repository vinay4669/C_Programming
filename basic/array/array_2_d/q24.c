#include<stdio.h>

void print(int r, int c, int a[r][c]){
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}

int main(){

    int r, c;
    printf("Enter no. of rows in matrix : ");
    scanf("%d", &r);
    printf("Enter no. of columns in matrix : ");
    scanf("%d", &c);
    int a1[r][c], a2[r][c], sub[r][c];
    printf("Matrix 1 : \n");
    for(int i = 0;i<r;i++){
        printf("Enter values of row %d : \n", i+1);
        for(int j = 0;j<c;j++){
            scanf("%d", &a1[i][j]);
        }
    }
    printf("Matrix 2 : \n");
    for(int i = 0;i<r;i++){
        printf("Enter values of row %d : \n", i+1);
        for(int j = 0;j<c;j++){
            scanf("%d", &a2[i][j]);
            sub[i][j] = a1[i][j] - a2[i][j];
        }
    }
    printf("Difference of matrices : \n");
    print(r, c, sub);

    return 0;
}