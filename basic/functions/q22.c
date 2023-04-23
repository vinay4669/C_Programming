#include<stdio.h>

void display(int a[], int n){
    printf("Array elements are : ");
    for(int i = 0;i<n;i++){
        printf("%d ", a[i]);
    }
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
    display(a, n);

    return 0;
}