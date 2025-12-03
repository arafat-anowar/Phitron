#include <bits/stdc++.h>
using namespace std;

bool lucky_or_not(int min_count)
{
    return (min_count % 2 == 0);
}
bool mn(int ar[], int n)
{
    int mn = INT_MAX, min_count = 0;
    for (int i = 0; i < n; i++)
        mn = min(ar[i], mn);
    for (int i = 0; i < n; i++)
        if (ar[i] == mn)
            min_count++;
    return lucky_or_not(min_count);
}
bool get_array(int n)
{
    int *ar = new int[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    return mn(ar, n);
}

int main()
{
    int n;
    cin >> n;
    bool lucky_unlucky = get_array(n);
    (lucky_unlucky == true) ? cout << "Unlucky" : cout << "Lucky";
    return 0;
}