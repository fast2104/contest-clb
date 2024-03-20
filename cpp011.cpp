#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, k;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cin >> k;
	// thuật toán find, .find
	auto x = find(a.begin(), a.end(), k);
	if (x != a.end()) {
		// distance để đo độ dài từ đầu vector (a.begin()) tới x
		cout << distance(a.begin(), x);
	} else {
		cout << -1;
	}
}
/*
code cho người khai báo vector kiểu clb, sửa trên github nên nó không tự format code đâu, chia nửa màn ra xong chép lại cho nó chắc
int n, k;
cin >> n;
vector<int> vt;
for (int i = 0; i < n; i++) {
int x;
cin >> x;
vt.push_back(x);
}
cin >> k;
auto x = find(vt.begin(), vt.end());
if (x!= vt.end()) {
cout<< distance(vt.begin(), x);
} else {
cout << -1;
}
*/
