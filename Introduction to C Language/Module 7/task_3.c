#include<stdio.h>
#include<limits.h>

int main(){
    int n;
    int max=INT_MIN;
    scanf("%d",&n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    
    for (int j = 0; j < n; j++)
    {
        if (array[j]>=max)
        {
            max=array[j];
        }
    }
    printf("%d",max);

    return 0;
}