#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        char al = 'A' + i - 1; 
        for (int j = 1; j <= i; j++) {
            printf("%c ", al);
        }
        printf("\n");
    }

    return 0;
}
