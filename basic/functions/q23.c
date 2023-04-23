#include<stdio.h>

int sum(int a[], int n){
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum += a[i];
    }
    return sum;
}

int main(){

    int n;
    printf("Enter size of array : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter array values : \n");
    for(int i = 0;i<n;i++){
        scanf("%d", (a+i));
    }
    printf("Sum of elements = %d", sum(a, n));

    return 0;
}