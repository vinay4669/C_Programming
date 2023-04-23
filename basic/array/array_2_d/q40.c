#include<stdio.h>

int main(){

    int r, c, res = 1;
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
    if(r==c){
        for(int i = 0;i<r;i++){
            for(int j = 0;j<c;j++){
                if(a[i][j]!=t[i][j]){
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
        printf("Symmetric matrix");
    }
    else{
        printf("Not a Symmetric matrix");
    }

    return 0;
}