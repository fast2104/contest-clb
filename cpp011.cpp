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
