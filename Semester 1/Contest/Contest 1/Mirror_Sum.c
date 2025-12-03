#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int f[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&f[i]);
    }
    
    int s[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&s[i]);
    }

    int ne[n];
    
    for (int i = 0; i < n; i++)
    {
        ne[i]=f[i]+s[n-1-i];
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ",ne[i]);
    }
    
    return 0;
}