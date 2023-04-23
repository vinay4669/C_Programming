#include<stdio.h>

int main(){

    int r, c, temp = 0;
    printf("Enter no. of rows in matrix : ");
    scanf("%d", &r);
    printf("Enter no. of columns in matrix : ");
    scanf("%d", &c);
    int min = (r<c)?r:c;
    int a[r][c];
    for(int i = 0;i<r;i++){
        printf("Enter values of row %d : \n", i+1);
        for(int j = 0;j<c;j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("Original matrix : \n");
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            if(i==j){
                temp = a[i][j];
                a[i][j] = a[i][min-j-1];
                a[i][min-j-1] = temp;
            }
        }
    }
    printf("New matrix : \n");
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}