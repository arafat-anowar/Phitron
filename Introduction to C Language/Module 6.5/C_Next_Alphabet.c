#include<stdio.h>

int main(){
    char c;
    scanf("%c",&c);
    if (c>='a' && c<'z')
    {
        printf("%c",c+1);
    }
    if (c=='z')
    {
        printf("a");
    }
    
    return 0;
}