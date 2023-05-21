#include<stdio.h>
#include<string.h>

int main(){

    char a[100], b[100];
    printf("Enter first string : ");
    gets(a);
    printf("Enter second string : ");
    gets(b);
    printf("%d", strcmp(a, b));

    return 0;
}