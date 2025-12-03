#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        int array[n];
        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
        }
        int flag = 0;
        for (int x = 0; x < n - 2; x++)
        {
            for (int y = x + 1; y < n - 1; y++)
            {
                for (int z = y + 1; z < n; z++)
                {
                    if (array[x] + array[y] + array[z] == s)
                    {
                        flag = 1;
                    }
                }
            }
        }
        (flag == 1) ? cout << "YES" : cout << "NO";
        cout << endl;
    }

    return 0;
}