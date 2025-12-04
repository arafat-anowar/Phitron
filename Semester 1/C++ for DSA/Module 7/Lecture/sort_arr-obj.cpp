#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int total_marks;
};

bool cmp(Student l, Student r)
{
    return (l.total_marks == r.total_marks) ? l.roll < r.roll : l.total_marks > r.total_marks;
}
int main()
{
    int n;
    cin >> n;
    Student array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i].name >> array[i].roll >> array[i].total_marks;
    }
    sort(array, array + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << array[i].name << " " << array[i].roll << " " << array[i].total_marks << endl;
    }

    return 0;
}