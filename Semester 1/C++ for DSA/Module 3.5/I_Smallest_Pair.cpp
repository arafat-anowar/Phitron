#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;
        int array[n];
        for (int j = 0; j < n; j++)
        {
            cin >> array[j];
        }

        long long int mn = INT_MAX;

        for (int k = 0; k < n - 1; k++)
        {
            for (int l = k + 1; l < n; l++)
            {
                long long int small = array[k] + array[l] + l - k;
                mn = min(mn, small);
            }
        }
        cout << mn << endl;
    }

    return 0;
}