#include<stdio.h>

int main(){
    int n,odd=0;
    scanf("%d",&n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    
    for (int j = 0; j < n; j++)
    {
        if (array[j]!=0 && array[j]%2==1)
        {
            odd++;
        }
        
    }
    printf("%d",odd);
    return 0;
}