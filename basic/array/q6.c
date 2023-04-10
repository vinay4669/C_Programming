#include<stdio.h>
#include<limits.h>

int main(){

    int n, even = 0, odd = 0;
    printf("Enter size of array : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter array values : \n");
    for(int i = 0;i<n;i++){
        scanf("%d", (a+i));
        if(a[i]%2==0)even++;
        else odd++;
    }
    printf("No. of even elements : %d\n", even);
    printf("No. of odd elements : %d\n", odd);

    return 0;
}