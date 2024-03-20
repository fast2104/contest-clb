#include <bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;
        // khác vs bài trước thì cái này phải chạy 2 for lồng thì e kbt cách khai báo kiểu clb đâu, e chỉ áp dụng vector để sắp xếp lại dãy sao cho tăng dần thoi
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        // sắp xếp tăng dần để cbi cho vào 2 vòng for, cái vector này chỉ để sắp xếp tăng dần thôi chứ chả ảnh hương tới code
        sort(a.begin(), a.end());
        int count = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                // vòng for để xem các số sau - số trước bé hơn k, cái này chắc sếp cx biết
                if (a[j] - a[i] < k) {
                    count++;
                } else {
                    break;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}

