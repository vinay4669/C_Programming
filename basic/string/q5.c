#include<stdio.h>
#include<string.h>

int main(){

    char s[100];
    printf("Enter a string : ");
    gets(s);
    printf("Uppercase string : %s", strupr(s));

    return 0;
}