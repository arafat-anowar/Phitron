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
        if (array[j]<=10)
        {
            printf("A[%d] = %d\n",j,array[j]);
        }
        
    }
    
    return 0;
}