#include <bits/stdc++.h>
using namespace std;

class Cricketer
{
public:
    int jersey_no;
    string country;
};
int main()
{
    Cricketer *dhoni = new Cricketer;
    dhoni->jersey_no = 15;
    dhoni->country = "India";
    Cricketer *kohli = new Cricketer;
    kohli->jersey_no = 4;
    kohli->country = "India";
    *kohli = *dhoni;
    delete dhoni;
    cout << kohli->jersey_no;
    return 0;
}