#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string Name;
    int Roll;

    Student(string n, int r)
    {
        Name = n;
        Roll = r;
    }
};
int main()
{
    Student Arafat("ARAFAT", 38);
    cout << Arafat.Name << " " << Arafat.Roll;
    return 0;
}