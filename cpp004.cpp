#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
	int n;
	cin >> n;
		// kbt bài này vector để làm gì nma kệ đi :>>
	vector<int> a(n);
	int k;
	cin >> k;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int count = 0;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if ((a[i] + a[j]) % k == 2) {
				count++;
			}
		}
	}
	cout << count << endl;
	}
}
