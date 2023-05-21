#include<stdio.h>

void copy(int *a, int n){

    int b[n];
    for(int i = 0;i<n;i++){
        b[i] = a[i];
    }
    printf("Copied array : \n");
    for(int i = 0;i<n;i++){
        printf("%d ", b[i]);
    }

}

int main(){

    int n;
    printf("Enter size of array : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter array values : \n");
    for(int i = 0;i<n;i++){
        scanf("%d", &a[i]);
    }
    copy(a, n);

    return 0;
}