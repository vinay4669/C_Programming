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
    int loc, ele;
    printf("Enter the location you want to add to : ");
    scanf("%d", &loc);
    printf("Enter the element you want to add : ");
    scanf("%d", &ele);
    int b[n+1], c = 0;
    for(int i = 0;i<n+1;i++){
        if(i==loc){
            b[i] = ele;
            i++;
            c = 1;
        }
        b[i] = a[i-c];
    }
    printf("Array after insertion : \n");
    for(int i = 0;i<n+1;i++){
        printf("%d\n", b[i]);
    }

    return 0;
}