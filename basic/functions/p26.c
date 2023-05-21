#include<stdio.h>

void reverse(int *a, int n){

    int b[n];
    for(int i = 0;i<n;i++){
        b[n-i-1] = a[i];
    }
    printf("Reversed array : \n");
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
    reverse(a, n);

    return 0;
}