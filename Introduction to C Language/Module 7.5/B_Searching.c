#include<stdio.h>

int main(){
    int n,num;
    scanf("%d",&n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    scanf("%d",&num);
    for (int j = 0; j < n; j++)
    {
        if (num==array[j])
        {
            printf("%d",j);
            return 0;
        }
    }
    printf("-1");
    return 0;
}