#include<stdio.h>
#include<string.h>

int main(){

    char s[100];
    printf("Enter a string : ");
    gets(s);
    for(int i = 0;s[i]!=0;i++){
        char c = s[i];
        if(c>=65&&c<=90){
            s[i] = c+32;
        }
        else if(c>=97&&c<=122){
            s[i] = c-32;
        }
    }
    printf("String after swapping case : %s", s);

    return 0;
}