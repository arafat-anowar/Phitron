#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string Name;
    int Roll;

    Student(string Name, int Roll)
    {
        this->Name=Name;
        this->Roll=Roll;
    }
};
int main()
{
    Student Arafat("ARAFAT", 38);
    cout << Arafat.Name << " " << Arafat.Roll;
    return 0;
}