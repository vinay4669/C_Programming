#include<stdio.h>

void print(int a[], int n){
    for(int i = 0;i<n;i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main(){

    int n;
    printf("Enter size of array : ");
    scanf("%d", &n);
    int a[n], even[n], odd[n], even_n = 0, odd_n = 0;
    printf("Enter array values : \n");
    for(int i = 0;i<n;i++){
        scanf("%d", (a+i));
        if(a[i]%2==0){
            even[even_n++] = a[i];
        }
        else{
            odd[odd_n++] = a[i];
        }
    }
    printf("Even elements : ");
    print(even, even_n);
    printf("Odd elements : ");
    print(odd, odd_n);

    return 0;
}