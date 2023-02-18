#include<stdio.h>

int main(){

    char c;
    scanf("%c", &c);
    ((c>='a' && c<='z') || (c>='A' && c<='Z')) ? printf("Alphabet.") : printf("Not an Alphabet.");

    return 0;
}