#include<bits/stdc++.h>
using namespace std;
int main() {
	string s1, s2;
	cin >> s1 >> s2;
	int chung = 0;
	for (int i = 0; i < s1.size(); i++) {
		string temp = s1.substr(i);
		if (s2.find(temp) == 0) {
			chung = temp.size();
		}
	}
	cout << s1.size() + s2.size() - chung;
}
