#include<iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>

using namespace std;

long long Sum(string s){
	long long res = 0;
	for(int i=0; i<s.length(); i++){
		res += s[i]-'0';
	}
	return res;	
}

void Solve(string s){
	long long res = Sum(s);
	if(res == 9) cout << 1 << endl;
	else{
		while(res > 9){
			long long tmp = res;
			res = 0;
			while(tmp){
				res += tmp%10;
				tmp /= 10;
			}		
		}
		if(res== 9) cout << 1 << endl;
		else cout << 0 << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		Solve(s);
	}
}