#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        if (s1.size() > s2.size())
        {
            for (int i = 0; i < s2.size(); i++)
            {
                cout << s1[i] << s2[i];
            }
            for (int i = s2.size(); i < s1.size(); i++)
            {
                cout << s1[i];
            }
        }
        else if (s1.size() < s2.size())
        {
            for (int i = 0; i < s1.size(); i++)
            {
                cout << s1[i] << s2[i];
            }
            for (int i = s1.size(); i < s2.size(); i++)
            {
                cout << s2[i];
            }
        }
        else if (s1.size() == s2.size())
        {
            for (int i = 0; i < s1.size(); i++)
            {
                cout << s1[i] << s2[i];
            }
        }
        cout << endl;
    }

    return 0;
}