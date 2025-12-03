#include <bits/stdc++.h>
using namespace std;

int main()
{
    int *a = new int[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    int *ar = new int[10];
    for (int i = 0; i < 5; i++)
    {
        ar[i] = a[i];
    }

    for (int i = 5; i < 10; i++)
    {
        cin >> ar[i];
    }

    for (int i = 0; i < 10; i++)
    {
        cout << ar[i] << " ";
    }
    delete[] a;
    return 0;
}