#include<stdio.h>
#include<string.h>

int main(){

    char s[100];
    printf("Enter a string : ");
    gets(s);
    int f[256] = {0};
    for(int i = 0;s[i]!=0;i++){
        int c = s[i];
        f[c]++;
    }
    printf("Frequency of each characters : \n");
    for(int i = 0;i<=255;i++){
        if(f[i]!=0){
            printf("%c : %d\n", i, f[i]);
        }
    }

    return 0;
}