#include<stdio.h>
#include<limits.h>

int main(){

    int n, max = INT_MIN;
    printf("Enter size of array : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter array values : \n");
    for(int i = 0;i<n;i++){
        scanf("%d", (a+i));
        if(a[i]>max){
            max = a[i];
        }
    }
    int max2 = a[0];
    for(int i = 1;i<n;i++){
        if(a[i]>max2 && a[i]!=max){
            max2 = a[i];
        }
    }
    printf("Second largest = %d", max2);

    return 0;
}