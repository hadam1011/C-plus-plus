#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>

using namespace std;

struct PhanSo{
	long long tu,mau;
};

void nhap(PhanSo &p){
	cin >> p.tu >> p.mau;
}

long long Ucln(long long a, long long b){
	long long tmp;
    while(b != 0) {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

void rutgon(PhanSo &p){
	long long uc =  Ucln(p.tu,p.mau);
	p.tu /= uc;
	p.mau /= uc;
}

void in(PhanSo p){
	cout << p.tu << "/" << p.mau;
}

int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}
