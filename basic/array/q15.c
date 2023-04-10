#include<stdio.h>

int main(){

    int n1, n2;
    printf("Enter size of first array : ");
    scanf("%d", &n1);
    int a1[n1];
    printf("Enter array values : \n");
    for(int i = 0;i<n1;i++){
        scanf("%d", (a1+i));
    }
    printf("Enter size of second array : ");
    scanf("%d", &n2);
    int a2[n2];
    printf("Enter array values : \n");
    for(int i = 0;i<n2;i++){
        scanf("%d", (a2+i));
    }
    int new_arr[n1+n2];
    for(int i = 0, j = 0;i<n1+n2;i++){
        if(i<n1) new_arr[i] = a1[i];
        else{
            new_arr[i] = a2[j];
            j++;
        }
    }
    printf("Merged array : \n");
    for(int i = 0;i<n1+n2;i++){
        printf("%d\n", new_arr[i]);
    }

    return 0;
}