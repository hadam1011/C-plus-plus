/*PHÉP CHIA DƯ CỦA TÍCH HAI SỐ*/
#include<iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>

using namespace std;

long long Modulo(long long a, long long b, long long p){
	if(b == 0) return 1;
	if(b == 1) return a%p;
	long long tmp = Modulo(a,b/2,p);
	if(b%2) return (tmp%p + tmp%p + a%p) % p;
	else return (tmp%p + tmp%p) % p;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long a,b,c;
		cin >> a >> b >> c;
		cout << Modulo(a,b,c) << endl;
	}
}