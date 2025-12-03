#include <bits/stdc++.h>
using namespace std;
 
void sor(int *array, int n, int i)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (array[i] == 0)
            {
                swap(array[i], array[j]);
            }
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int *array = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
 
    sor(array, n, 0);
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    delete[] array;
 
    return 0;
}