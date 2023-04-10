#include<stdio.h>

int main(){

    int n, s = 0;
    printf("Enter size of array : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter array values : \n");
    for(int i = 0;i<n;i++){
        scanf("%d", (a+i));
        s += *(a+i);
    }
    printf("Sum of array values = %d", s);

    return 0;
}