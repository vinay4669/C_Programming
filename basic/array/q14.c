#include<stdio.h>
#include<limits.h>

int main(){

    int n, max = INT_MIN, unique_count = 0;
    printf("Enter size of array : ");
    scanf("%d", &n);
    int a[n], count[100] = {0};
    printf("Enter array values : \n");
    for(int i = 0;i<n;i++){
        scanf("%d", (a+i));
        if(a[i]>max){
            max = a[i];
        }
    }
    for(int i = 0;i<n;i++){
        count[a[i]]++;
    }
    for(int i = 0;i<=max;i++){
        if(count[i]==1){
            unique_count++;
        }
    }
    int unique_arr[unique_count];
    for(int i = 0, j = 0;i<=max;i++){
        if(count[i]==1){
            unique_arr[j] = i;
            j++;
        }
    }
    printf("New array with unique elements : \n");
    for(int i = 0;i<unique_count;i++){
        printf("%d\n", unique_arr[i]);
    }

    return 0;
}