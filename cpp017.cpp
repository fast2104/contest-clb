#include <bits/stdc++.h>

using namespace std;
//tao struc nhap ttin cay
struct tre {
    int stt;
    int age;
    int height;
};

int main() {
    int n;
    cin >> n;
    tre a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i].stt >> a[i].age >> a[i].height;
    }
    Tree maxAge = a[0];
    for (int i = 1; i < n; ++i) {
    	//tim xem cay nao cao nhat
        if (a[i].age > maxAge.age) {
            maxAge = a[i];
        }
    }
    cout << maxAge.stt << " " << maxAge.age << " " << maxAge.height << endl;

    return 0;
}
