/*PHÉP CHIA DƯ CỦA SỐ NGUYÊN LỚN*/
#include<iostream>
#include<vector>
using namespace std;

long long Count(long long n, string s){
	long long res = 0;
	for(int i=0 ;i<s.length(); i++){
		int a = s[i] - '0';
		res = res*10 + a;
		res %= n;
	}
	return res%n;
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		cin >> s;
		long long n;
		cin >> n;
		cout << Count(n,s) << endl;
	}
}