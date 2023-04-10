#include<stdio.h>

int main(){

    int n, s = 0;
    printf("Enter size of array : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter array values : \n");
    for(int i = 0;i<n;i++){
        scanf("%d", (a+i));
    }
    printf("Elements at edd index : \n");
    for(int i = 1;i<n;i+=2){
        printf("%d ", *(a+i));
    }

    return 0;
}