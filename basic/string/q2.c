#include<stdio.h>
#include<string.h>

int main(){

    char s[100];
    printf("Enter a string : ");
    gets(s);
    char c[100] = {'\0'};
    for(int i = 0;s[i]!=0;i++){
        c[i] = s[i];
    }
    printf("Copied string : %s", c);

    return 0;
}