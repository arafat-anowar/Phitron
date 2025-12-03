#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    char section;
    int cls;
};
int main()
{
    Student Arafat;
    cin >> Arafat.name >> Arafat.roll >> Arafat.section >> Arafat.cls;
    cout << Arafat.name << " " << Arafat.roll << " " << Arafat.section << " " << Arafat.cls;
    return 0;
}