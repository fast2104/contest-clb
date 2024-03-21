#include<bits/stdc++.h>
using namespace std;
struct veggie {
	string name;
	int stt, nutrient;
	float in, out;
	float profit;
	void nhap(int i) {
		stt = i;
		cin.ignore();
		cin >> name;
		cin >> in >> out >> nutrient;
		profit = out - in;
	}
	void xuat() {
		cout << stt << " " << name << " " << nutrient << " " << fixed << setprecision(2) << profit << endl;
	}
};
bool cmp (veggie a, veggie b) {
		if (a.nutrient == b.nutrient) {
			return a.profit < b.profit;
		}
		return a.nutrient > b.nutrient;
	}
int main() {
	int n;
	cin >> n;
	vector<veggie> a(n);
	int i = 0;
	for (auto &x : a) {
		x.nhap(++i);
	}
	sort(a.begin(), a.end(), cmp);
	for (auto x : a){
		x.xuat();
	}
}
