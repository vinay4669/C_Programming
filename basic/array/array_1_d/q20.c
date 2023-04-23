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
    int a[n], even[n], odd[n], even_n = 0, odd_n = 0, temp = 0;
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
    for(int i = 0;i<even_n-1;i++){
        for(int j = 0;j<even_n-i-1;j++){
            if(even[j]>even[j+1]){
                temp = even[j];
                even[j] = even[j+1];
                even[j+1] = temp;
            }
        }
    }
    for(int i = 0;i<odd_n-1;i++){
        for(int j = 0;j<odd_n-i-1;j++){
            if(odd[j]>odd[j+1]){
                temp = odd[j];
                odd[j] = odd[j+1];
                odd[j+1] = temp;
            }
        }
    }
    printf("Sorted even elements : ");
    print(even, even_n);
    printf("Sorted odd elements : ");
    print(odd, odd_n);

    return 0;
}