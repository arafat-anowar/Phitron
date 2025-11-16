#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    // cout << min({x, y, z})<<endl;
    // cout << max({x, y, z});
    swap(x,y);
    cout<<x<<endl<<y;
    return 0;
}