#include<stdio.h>

int main(){
    int test;
    scanf("%d",&test);
    for (int i = 1; i <= test; i++)
    {
        int x,y;
        int sum=0;
        scanf("%d %d",&x,&y);
        if (x>y)
        {
            for (int j =x-1; j>y; j--)
            {
                if (j%2==1)
                {
                    sum+=j;
                }
                
            } 
        }
        if (x<y)
        {
            for (int k =x+1; k<y; k++)
            {
                if (k%2==1)
                {
                    sum+=k;
                }
                
            } 
        }
        printf("%d\n",sum);
    }
    
    return 0;
}