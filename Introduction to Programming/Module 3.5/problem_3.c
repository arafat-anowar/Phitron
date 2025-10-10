#include<stdio.h>

int main(){
    int A;
    long long int B;
    float C;
    char D;
    scanf("%d\n",&A);
    scanf("%lld\n",&B);
    scanf("%f\n",&C);
    scanf("%c\n",&D);
    printf("%d\n%lld\n%.2f\n%c",A,B,C,D);
    return 0;
}