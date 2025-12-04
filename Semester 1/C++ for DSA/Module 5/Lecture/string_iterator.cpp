#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    for (auto i = s.begin(); i < s.end(); i++)
    {
        cout<<*i<<endl;
    }
    for (string::iterator i = s.begin(); i < s.end(); i++)
    {
        cout<<*i<<endl;
    }
    return 0;
}