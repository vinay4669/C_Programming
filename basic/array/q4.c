#include<stdio.h>
#include<limits.h>

int main(){

    int n;
    printf("Enter size of array : ");
    scanf("%d", &n);
    int a[n];
    int max = INT_MIN;
    int min = INT_MAX;
    printf("Enter array values : \n");
    for(int i = 0;i<n;i++){
        scanf("%d", (a+i));
        if(a[i]>max){
            max = a[i];
        }
        if(a[i]<min){
            min = a[i];
        }
    }
    printf("Max value = %d\n", max);
    printf("Min value = %d", min);

    return 0;
}