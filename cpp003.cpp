#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		vector<int> v;
		int count = 0;
		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;
			v.push_back(x);
			sort(v.begin(), v.end());
			int pos = lower_bound(v.begin(), v.end(), x) - v.begin();
			count += pos;
		}
		cout << count << endl;
	}
}
