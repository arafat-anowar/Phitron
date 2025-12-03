#include <stdio.h>
#include <string.h>

int main()
{
    char s1[1001];
    char s2[1001];
    scanf("%s", &s1);
    scanf("%s", &s2);

    int s, e;
    scanf("%d %d", &s, &e);

    int len_s1 = strlen(s1);
    int len_s2 = strlen(s2);
    char m[len_s1 + len_s2];

    int len_m = strlen(m);
    for (int i = 0; i < len_s1; i++)
    {
        m[i] = s1[i];
    }
    int j = len_s1;
    for (int i = s; i <= e; i++)
    {

        m[j] = s2[i];
        m[j+1]='\0';
        j++;
    }

    printf("%s\n", m);

    return 0;
}