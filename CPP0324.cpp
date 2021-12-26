/*PHÉP CHIA DƯ CỦA LŨY THỪA SỐ NGUYÊN LỚN*/
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long ModOfLargeNumber(long long n, string s){
	long long res = 0;
	for(int i=0; i<s.length(); i++){
		res = res*10 + s[i]-'0';
		res %= n;
	}
	return res%n;
}

long long FindMod(long long b, long long m, string a){
	long long c = ModOfLargeNumber(m,a);
	long long res = 1;
	while(b){
		if(b%2 == 1){
			res *= c;
			res %= m;
		}
		c *= c;
		c %= m;
		b /= 2;	
	}
	return res;
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string a;
		cin >> a;
		long long b,M;
		cin >> b >> M;
		cout << FindMod(b,M,a) << endl;
	}
}