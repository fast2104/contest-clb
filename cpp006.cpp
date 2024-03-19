#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
	cin >> n;
	set<int> st;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		st.insert(x);
	}
	// lập vector để chuẩn bị  đảo ngược set
	vector<int> vt(st.begin(), st.end());
	// đảo ngược set, có trên blog 28tech đấy
	sort(vt.begin(), vt.end(), greater<int>());
	for (auto x : vt) {
		cout << x << " ";
	}
	cout << "\n";
	}
}