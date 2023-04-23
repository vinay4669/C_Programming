#include<stdio.h>
#include<limits.h>

int main(){

    int n, max = INT_MIN;
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
    printf("Count of elements : \n");
    for(int i = 0;i<=max;i++){
        if(count[i]>0){
            printf("%d : %d\n", i, count[i]);
        }
    }

    return 0;
}