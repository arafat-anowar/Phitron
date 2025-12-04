#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int math_mark;
    int eng_mark;

    Student(string name, int roll, int math_mark, int eng_mark)
    {
        this->name = name;
        this->roll = roll;
        this->math_mark = math_mark;
        this->eng_mark = eng_mark;
    }

    int total_marks()
    {
        int total = math_mark + eng_mark;
        return total;
    }
};
int main()
{
    Student Arafat("Arafat", 10, 95, 86);
    Student Shafeen("Shafeen", 8, 58, 100);
    cout << Arafat.total_marks() << " " << Shafeen.total_marks();
    return 0;
}