#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char digit[7];
        cin >> digit;
        int sum_f = 0, sum_l = 0;
        for (int i = 0; i < 3; i++)
        {
            sum_f += digit[i] - '0';
        }
        for (int i = 3; i < 6; i++)
        {
            sum_l += digit[i] - '0';
        }
        (sum_f == sum_l) ? cout << "YES" << endl : cout << "NO" << endl;
    }

    return 0;
}