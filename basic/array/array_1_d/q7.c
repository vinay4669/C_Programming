#include<stdio.h>
#include<limits.h>

int main(){

    int n, nn = 0;
    printf("Enter size of array : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter array values : \n");
    for(int i = 0;i<n;i++){
        scanf("%d", (a+i));
        if(a[i]<0)nn++;
    }
    printf("No. of negative elements : %d", nn);

    return 0;
}