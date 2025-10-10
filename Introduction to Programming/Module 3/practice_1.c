#include<stdio.h>

int main(){
    for(int i=1;i<=200;i++){
        if(8*i<=200){
            printf("8*%d=%d\n",i,8*i);
        }
    }
    return 0;
}