#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    string s;
    cin >> t >> s;
    int a = 0, d = 0;
    for (string::iterator i = s.begin(); i < s.end(); i++)
    {
        (*i == 'A') ? a++ : d++;
    }

    if (a > d)
    {
        cout << "Anton";
    }
    else if (a < d)
    {
        cout << "Danik";
    }
    else if (a == d)
    {
        cout << "Friendship";
    }

    return 0;
}