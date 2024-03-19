#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		vector<int> a(n);
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