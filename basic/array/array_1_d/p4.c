#include<stdio.h>

int main(){

    int n, s = 0;
    printf("Enter size of array : ");
    scanf("%d", &n);
    int a[n], reva[n];
    printf("Enter array values : \n");
    for(int i = 0;i<n;i++){
        scanf("%d", (a+i));
        reva[n-i-1] = *(a+i);
    }
    printf("Reverse array : \n");
    for(int i = 0;i<n;i++){
        printf("%d ", *(reva+i));
    }
    

    return 0;
}