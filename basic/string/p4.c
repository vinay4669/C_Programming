#include<stdio.h>
#include<string.h>

int main(){

    char s[100];
    char t[100] = {'\0'};
    int x = 1, l = 0;
    printf("Enter a string : ");
    gets(s);
    for(int i = 0;s[i]!=0;i++){
        char c = s[i];
        for(int j = 0;t[j]!=0;j++){
            if(c==t[j]){
                x = 0;
            }
        }
        if(x){
            t[l] = c;
            l++;
        }
        x = 1;
    }
    printf("%s", t);

    return 0;
}
