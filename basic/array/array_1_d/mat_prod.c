#include<stdio.h>

int main(){

    int a[3][2] = {1, 2, 3, 4, 5, 6},  b[2][3] = {1, 2, 3, 4, 5, 6}, c[3][3] = {0};
    int r1 = 3, c1 = 2, r2 = 2, c2 = 3;
    for(int i = 0;i<r1;i++){
        for(int j = 0;j<c1;j++){
            for(int k = 0;k<c2;k++){
                c[i][k] += a[i][j] * b[j][k];
            }
        }
    }
    for(int i = 0;i<r1;i++){
        for(int j = 0;j<c2;j++){
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}