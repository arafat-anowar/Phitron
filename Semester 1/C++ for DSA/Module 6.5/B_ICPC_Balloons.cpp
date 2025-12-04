#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        bool vis[26] = {false};
        int ball = 0;
        for (int i = 0; i < n; i++)
        {
            char c = s[i];
            int idx = s[i] - 'A';

            if (vis[idx] == false)
            {
                vis[idx] = true;
                ball += 2;
            }
            else
            {
                ball += 1;
            }
        }
        cout << ball << endl;
    }

    return 0;
}