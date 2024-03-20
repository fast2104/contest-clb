#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		vector<int> a(n);
		/* e thích tạo vector kiểu này hơn, nếu lít thích theo cách clb có thể sửa từ dòng 9 tới đoạn sort thành (riêng bài này thì không khuyến khích do đoạn dưới dùng mảng ctct, kbt từ vector ra đây thì làm kiểu gì)
			vector<int> vt;
		for (int i = 0; i < n; i++) {
			int x;
   			cin >> x;
      			vt.push_back(x);
		 }
  		sort(vt.begin(), vt.end());
  		*/
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		sort(a.begin(), a.end());
		for (int i = 0; i < n; i++) {
		cout << 2 * (a[n-1] + a[n-2] - a[i] - a[0]);
		cout << "\n";
		break;
		}
	}
}
