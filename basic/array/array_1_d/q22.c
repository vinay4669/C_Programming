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
    int last = a[n-1];
    for(int i = n-1;i>0;i--){
        a[i] = a[i-1];
    }
    a[0] = last;
    printf("Right rotated array : ");
    for(int i = 0;i<n;i++){
        printf("%d ", a[i]);
    }

    return 0;
}