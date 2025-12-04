#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int jersey;

    Student(string name, int jersey)
    {
        this->name = name;
        this->jersey = jersey;
    }
};
int main()
{
    Student *Arafat = new Student("Arafat", 10);
    Student *Shafeen = new Student("Shafeen", 8);
    *Shafeen = *Arafat;
    delete Arafat;
    cout << Shafeen->name << " " << Shafeen->jersey;
    return 0;
}