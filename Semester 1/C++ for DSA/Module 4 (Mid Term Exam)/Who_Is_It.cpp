#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    string name;
    char section;
    int total_marks;
};
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        Student sakib;
        cin >> sakib.id >> sakib.name >> sakib.section >> sakib.total_marks;
        Student rakib;
        cin >> rakib.id >> rakib.name >> rakib.section >> rakib.total_marks;
        Student akib;
        cin >> akib.id >> akib.name >> akib.section >> akib.total_marks;

        Student top = sakib;

        if (top.total_marks < rakib.total_marks || top.total_marks == rakib.total_marks && top.id > rakib.id)
            top = rakib;

        if (top.total_marks < akib.total_marks || top.total_marks == akib.total_marks && top.id > akib.id)
            top = akib;

        cout << top.id << " " << top.name << " " << top.section << " " << top.total_marks << endl;
    }

    return 0;
}