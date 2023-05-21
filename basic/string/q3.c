#include<stdio.h>
#include<string.h>

int main(){

    char a[100], b[100], c[200] = {'\0'};
    printf("Enter first string : ");
    gets(a);
    printf("Enter second string : ");
    gets(b);
    int i = 0;
    for(;a[i]!='\0';i++){
        c[i] = a[i];
    }
    for(int j = 0;b[j]!=0;j++, i++){
        c[i] = b[j];
    }
    printf("Concatenated string : %s", c);

    return 0;
}