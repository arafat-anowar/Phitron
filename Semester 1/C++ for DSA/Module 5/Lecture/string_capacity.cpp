#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s_1;
    cin >> s_1;
    cout << s_1.size() << endl;
    cout << s_1.max_size() << endl;
    cout << s_1.capacity() << endl;
    s_1.erase();
    cout << s_1.empty();

    string s_2;
    cin >> s_2;
    s_2.resize(25, '*');
    cout << s_2;
    return 0;
}