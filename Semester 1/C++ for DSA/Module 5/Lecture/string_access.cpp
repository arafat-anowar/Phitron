#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s_1, s_2;
    cin >> s_1 >> s_2;
    cout << s_1[2] << s_2[1] << endl;
    cout << s_1.at(0) << s_2.at(0) << endl;
    cout << s_1.back() << s_2.front();
    return 0;
}