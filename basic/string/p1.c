#include<stdio.h>
#include<string.h>

int main(){

    char s1[100], s2[100];
    printf("Enter first string : ");
    gets(s1);
    printf("Enter second string : ");
    gets(s2);
    printf("String with max length : ");
    if(strlen(s1)>strlen(s2)){
        printf("%s", s1);
    }
    else{
        printf("%s", s2);
    }

    return 0;
}