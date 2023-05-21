#include<stdio.h>
#include<string.h>

int main(){

    char s[100];
    printf("Enter a string : ");
    gets(s);
    int v = 0, co = 0;
    for(int i = 0;s[i]!=0;i++){
        char c = s[i];
        if((c>=65&&c<=90) || (c>=97&&c<=122)){
            if(c=='a' || c=='A' || c=='e' || c=='E' || c=='i' || c=='I' || c=='o' || c=='O' || c=='u' || c=='U'){
                v++;
            }
            else{
                co++;
            }
        }
    }
    printf("No. of vowels = %d\nNo. of consonants = %d", v, co);

    return 0;
}