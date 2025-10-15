#include<stdio.h>
#include<limits.h>

int main(){
    int n;
    int min=INT_MAX;
    scanf("%d",&n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    
    for (int j = 0; j < n; j++)
    {
        if (array[j]<=min)
        {
            min=array[j];
        }
    }
    printf("%d",min);

    return 0;
}