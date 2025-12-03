#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    char section;
    int math_marks;
    int cls;

    Student(string name, int roll, char section, int math_marks, int cls)
    {
        this->name = name;
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
        this->cls = cls;
    }
};
int main()
{
    Student arafat("Arafat", 10, 'A', 89, 5);
    Student shafeen("Shafeen", 5, 'A', 58, 5);
    Student mahadi("Mahadi", 8, 'B', 99, 5);
    cout << max({arafat.math_marks, shafeen.math_marks, mahadi.math_marks});
    return 0;
}