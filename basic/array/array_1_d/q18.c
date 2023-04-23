#include<stdio.h>

int search(int a[], int search_value, int size){
    for (int i = 0; i < size; i++)
    {
        if(a[i]==search_value) return 1;
    }
    return 0;
    
}

int main(){

    int n, k;
    printf("Enter size of array : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter array values : \n");
    for(int i = 0;i<n;i++){
        scanf("%d", (a+i));
    }
    printf("Enter the element you wanna search : ");
    scanf("%d", &k);
    if(search(a, k, n)){
        printf("Element found");
    }
    else{
        printf("Element not found");
    }
    

    return 0;
}