#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    int gd_pair = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (array[i] % 2 == 0 && array[j] % 2 != 0 || array[i] % 2 != 0 && array[j] % 2 == 0)
            {
                gd_pair++;
            }
        }
    }
    printf("%d", gd_pair);
    return 0;
}