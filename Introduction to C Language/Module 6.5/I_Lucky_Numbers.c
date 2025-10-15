#include<stdio.h>

int main(){
    int n,f_d,l_d;
    scanf("%d",&n);
    f_d=n/10;
    l_d=n%10;
    if (l_d%f_d==0 || f_d%l_d==0)
    {
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}