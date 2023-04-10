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
    int search_value, found = 0;
    printf("Enter value to be searched : \n");
    scanf("%d", &search_value);
    for(int i = 0;i<n;i++){
        if(search_value==*(a+i)){
            found = 1;
            break;
        }
    }
    if(found){
        printf("Value found");
    }
    else{
        printf("Value not found");
    }

    return 0;
}