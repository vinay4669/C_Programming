#include<stdio.h>
#include<limits.h>

int main(){

    int n;
    printf("Enter size of array : ");
    scanf("%d", &n);
    int a[n], b[n];
    printf("Enter array values : \n");
    for(int i = 0;i<n;i++){
        scanf("%d", (a+i));
        b[i] = a[i];
    }
    printf("Copied array : \n");
    for(int i = 0;i<n;i++){
        printf("%d\n", b[i]);
    }

    return 0;
}