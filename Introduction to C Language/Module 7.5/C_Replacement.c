#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    
    for (int j = 0; j < n; j++)
    {
        if (array[j]>0)
        {
            printf("1 ");
        }
        else if (array[j]==0)
        {
            printf("0 ");
        }
        
        else if (array[j]<0)
        {
            printf("2 ");
        }
        
    }
    
    return 0;
}