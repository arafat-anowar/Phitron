#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int cls;
    char sec;
    int roll;

    Student(string name, int cls, char sec, int roll)
    {
        this->name = name;
        this->cls = cls;
        this->sec = sec;
        this->roll = roll;
    }
};
int main()
{
    Student *Arafat = new Student("Arafat", 10, 'B', 48);
    Student *Shafeen = new Student("Shafeen", 10, 'B', 38);
    *Arafat = *Shafeen;
    delete Shafeen;
    cout << Arafat->name << " " << Arafat->cls << " " << Arafat->sec << " " << Arafat->roll;
    return 0;
}