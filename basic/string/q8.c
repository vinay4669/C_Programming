#include<stdio.h>
#include<string.h>

int main(){

    char s[100];
    printf("Enter a string : ");
    gets(s);
    int a = 0, d = 0, sc = 0;
    for(int i = 0;s[i]!=0;i++){
        char c = s[i];
        if((c>=65&&c<=90) || (c>=97&&c<=122)){
            a++;
        }
        else if(c>=48&&c<=57){
            d++;
        }
        else{
            sc++;
        }
    }
    printf("No. of alphabets = %d\nNo. of digits = %d\nNo. of special characters = %d", a, d, sc);

    return 0;
}