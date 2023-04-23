#include<stdio.h>
#include<limits.h>

int max(int a[], int n){
    int max = INT_MIN;
    for(int i = 0;i<n;i++){
        if(a[i]>max){
            max = a[i];
        }
    }
    return max;
}

int min(int a[], int n){
    int min = INT_MAX;
    for(int i = 0;i<n;i++){
        if(a[i]<min){
            min = a[i];
        }
    }
    return min;
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
    printf("Max element = %d\n", max(a, n));
    printf("Min element = %d", min(a, n));

    return 0;
}