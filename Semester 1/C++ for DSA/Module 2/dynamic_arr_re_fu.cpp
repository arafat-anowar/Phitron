#include <bits/stdc++.h>
using namespace std;

int *arr()
{
    int *arra = new int[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arra[i];
    }
    return arra;
}
int main()
{
    int *p = arr();
    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << " ";
    }
    delete[] p;
    return 0;
}