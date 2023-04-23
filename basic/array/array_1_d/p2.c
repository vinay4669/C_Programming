#include<stdio.h>

int main(){

    int n;
    printf("Enter size of array : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter array values : \n");
    for(int i = 0;i<n;i++){
        scanf("%d", (a+i));
    }
    printf("Array values are : \n");
    for(int i = 0;i<n;i++){
        printf("%d ", *(a+i));
    }

    return 0;
}