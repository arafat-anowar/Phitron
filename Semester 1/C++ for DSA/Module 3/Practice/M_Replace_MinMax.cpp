#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arra[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arra[i];
    }
    int mn = INT_MAX;
    int mn_idx = -1;
    int mx = INT_MIN;
    int mx_idx = -1;
    for (int i = 0; i < n; i++)
    {
        mn = min(arra[i], mn);
        mx = max(arra[i], mx);
    }
    for (int i = 0; i < n; i++)
    {
        if (arra[i] == mx)
            mx_idx = i;
        if (arra[i] == mn)
            mn_idx = i;
    }
    arra[mn_idx] = mx;
    arra[mx_idx] = mn;
    for (int i = 0; i < n; i++)
    {
        cout << arra[i] << " ";
    }

    return 0;
}