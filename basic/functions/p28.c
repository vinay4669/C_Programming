#include<stdio.h>

void print(int m[][]){
    
}

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
    print(a);

    return 0;
}