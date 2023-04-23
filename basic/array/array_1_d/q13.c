#include<stdio.h>
#include<limits.h>

int main(){

    int n, max = INT_MIN, duplicate_count = 0;
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
        if(count[i]>1){
            duplicate_count++;
        }
    }
    printf("Count of duplicate elements = %d", duplicate_count);

    return 0;
}