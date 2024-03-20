#include <bits/stdc++.h>

using namespace std;
//tạo struct nhập thông tin cây, sếp đổi tên struct thành info hay cái qq j cũng đc
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
    	//tìm cây cao nhất
        if (a[i].age > maxAge.age) {
            maxAge = a[i];
        }
    }
    cout << maxAge.stt << " " << maxAge.age << " " << maxAge.height << endl;

    return 0;
}
