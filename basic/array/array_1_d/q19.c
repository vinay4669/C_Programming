#include<stdio.h>

int main(){

    int n, temp = 0;
    printf("Enter size of array : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter array values : \n");
    for(int i = 0;i<n;i++){
        scanf("%d", (a+i));
    }
    printf("Original array : ");
    for(int i = 0;i<n;i++){
        printf("%d ", a[i]);
    }
    for(int i = 0;i<n-1;i++){
        for(int j = 0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("\nSorted array : ");
    for(int i = 0;i<n;i++){
        printf("%d ", a[i]);
    }

    return 0;
}