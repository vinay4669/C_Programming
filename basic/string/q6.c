#include<stdio.h>
#include<string.h>

int main(){

    char s[100];
    printf("Enter a string : ");
    gets(s);
    printf("Lowercase string : %s", strlwr(s));

    return 0;
}