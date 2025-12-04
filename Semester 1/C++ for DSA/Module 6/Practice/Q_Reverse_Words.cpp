#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, word;
    getline(cin, s);
    stringstream ss(s), sss(s);
    int count = 0, i = 1;
    while (sss >> word)
    {
        count++;
    }

    while (ss >> word)
    {
        reverse(word.begin(), word.end());
        cout << word;
        i++;
        if (i <= count)
        {
            cout << " ";
        }
    }

    return 0;
}