#include<stdio.h>

void print(int a[], int n){
    for(int i = 0;i<n;i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main(){

    int n;
    printf("Enter size of array : ");
    scanf("%d", &n);
    int a[n], r[n];
    printf("Enter array values : \n");
    for(int i = 0;i<n;i++){
        scanf("%d", (a+i));
        r[n-i-1] = a[i];
    }
    printf("Original array : ");
    print(a, n);
    printf("Reverse of array : ");
    print(r, n);

    return 0;
}