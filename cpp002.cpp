#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		set<int> st;
		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;
			if(x>= 1 && x<= n){
			
			st.insert(x);
		}
		}
		if (st.size() == n) {
			cout << "An may thoi";
		} else {
			cout << n - st.size();
			cout << "\n";
		}
	}
	return 0;
}
