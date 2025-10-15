#include<stdio.h>
#include<limits.h>

int main(){
    int n;
    int low=INT_MAX;
    scanf("%d",&n);
    int array[n];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d",&array[i]);
    }
    for (int j = 1; j <= n; j++)
    {
        if (array[j]<=low)
        {
            low=array[j];
        }
        
    }
    printf("%d ",low);
    for (int k = 1; k <= n; k++)
    {
        if (low==array[k])
        {
            printf("%d ",k);
            return 0;
        }
        
    }
    
    return 0;
}