#include <bits/stdc++.h>
using namespace std;
#define MAX_NUM int(1e9)
struct SinhVien
{
    string name;
    int dob;
    float gpa;

    void nhap()
    {
        cin.ignore();
        getline(cin, name);
        cin >> dob >> gpa;
    }

    void xuat(int i)
    {
        cout << "#" << i << " " << name << " " << dob << " " << gpa << endl;
    }
};

int main()
{
    int n;
    cin >> n;
    vector<SinhVien> a(n);
    int rank = 0;
    float Min = MAX_NUM;
    float Max = -MAX_NUM;
    for (auto &x : a)
    {
        x.nhap();
        Max = max(Max, x.gpa);
        Min = min(Min, x.gpa);
    }
    for (auto x : a)
    {
        if (Max == x.gpa)
        {
            x.xuat(++rank);
        }
    }
    cout << "\n";
    rank = 0;
    for (auto x : a)
    {
        if (Min == x.gpa)
        {
            x.xuat(++rank);
        }
    }
    return 0;
}
