#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;

    cout << min(x, y) << endl;
    cout << max(x, y) << endl;

    cout << min({x, y, z}) << endl;
    cout << max({x, y, z}) << endl;

    swap(x, y);
    swap(y, z);
    cout << x << endl
         << y << endl
         << z;
    return 0;
}