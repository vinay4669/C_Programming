#include<stdio.h>
#include<limits.h>

int main(){

    int n;
    printf("Enter size of array : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter array values : \n");
    for(int i = 0;i<n;i++){
        scanf("%d", (a+i));
    }
    int loc;
    printf("Enter the position of element you want to delete : ");
    scanf("%d", &loc);
    int b[n-1], c = 0;
    for(int i = 0;i<n;i++){
        if(i==loc){
            c = 1;
        }
        else b[i-c] = a[i];
    }
    printf("Array after deletion : \n");
    for(int i = 0;i<n-1;i++){
        printf("%d\n", b[i]);
    }

    return 0;
}