#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int cls;
    char sec;
    int marks;
};
int main()
{
    int n;
    cin >> n;
    Student arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].name >> arr[i].cls >> arr[i].sec >> arr[i].marks;
    }

    Student mn, mx;
    mn.marks = INT_MAX;
    mx.marks = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i].marks < mn.marks)
        {
            mn = arr[i];
        }
        if (arr[i].marks > mx.marks)
        {
            mx = arr[i];
        }
    }
    cout << mn.name << endl;
    cout << mx.name << endl;
    return 0;
}