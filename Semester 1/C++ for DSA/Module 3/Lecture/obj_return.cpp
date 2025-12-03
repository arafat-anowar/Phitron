#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
};

Student get_obj()
{
    Student Arafat;
    cin >> Arafat.name >> Arafat.roll;
    return Arafat;
}
int main()
{
    Student obj = get_obj();
    cout << obj.name << " " << obj.roll;
    return 0;
}