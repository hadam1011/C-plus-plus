#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>

using namespace std;

struct PhanSo{
	long long tu,mau;
};

PhanSo rutgon(PhanSo &a){
	long long gcd = __gcd(a.tu,a.mau);
	a.tu /= gcd;
	a.mau /= gcd;
	return a;
}

PhanSo Sum(PhanSo a, PhanSo b){
	PhanSo res;
	long long lcm = (a.mau*b.mau)/__gcd(a.mau,b.mau);
	res.mau = lcm;
	res.tu = a.tu*(lcm/a.mau) + b.tu*(lcm/b.mau);
	rutgon(res);
	res.tu *= res.tu;
	res.mau *= res.mau;
	return res;
}

PhanSo Mul(PhanSo a, PhanSo b, PhanSo c){
	PhanSo res;
	res.tu = a.tu*b.tu*c.tu;
	res.mau = a.mau*b.mau*c.mau;
	rutgon(res);
	return res;
}

void process(PhanSo a, PhanSo b){
	PhanSo c = Sum(a,b);
	PhanSo d = Mul(a,b,c);
	cout << c.tu << "/" << c.mau << " ";
	cout << d.tu << "/" << d.mau << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}