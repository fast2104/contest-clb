#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
void rutgon_ps(int &tu, int &mau) {
    int rutgon = gcd(tu, mau);
    tu /= rutgon;
    mau /= rutgon;
}
int main() {
    int a, b, c, d;
	cin >> a >> b >> c >> d;
    char phep_toan[5];
	cin >> phep_toan;
    int tu, mau;
	// so sánh xem mình nhập trùng chữ tổng này xem, strcmp chắc sếp biết vì code c cũng có
    if (strcmp(phep_toan, "Tong") == 0) {
        tu = a * d + b * c;
        mau = b * d;
    } else if (strcmp(phep_toan, "Hieu") == 0) {
        tu = a * d - b * c;
        mau = b * d;
    }
    rutgon_ps(tu, mau);
	//cái này để đẩy dấu trừ lên tử và loại trừ cả tử và mẫu đều âm sẽ in ra 2 dấu trừ, thử code 0 có dòng if này rồi dùng test case đề xem, sẽ ra 1/-4 đấy
    if (mau < 0) {
    	cout << "-";
    	mau = abs(mau);
	} else if (tu < 0 && mau < 0) {
		tu = abs(tu);
		mau = abs(mau);
	}
    cout << tu << "/" << mau << endl;
    return 0;
}

