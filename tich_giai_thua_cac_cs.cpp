#include<iostream>
#include <algorithm>
#include <string>
#include <set>
#include <vector>

using namespace std;

void Solve(string s, int n){
	string v = "";
	for(auto x : s){
		if(x == '4') v += "223";
		else if(x == '6') v += "35";
		else if(x == '8') v += "2227";
		else if(x == '9') v += "3327";
		else if(x != '0' && x != '1') v += x;
	}
	sort(v.rbegin(), v.rend());
	for(auto x : v){
		cout << x;
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		string s;
		cin >> n >> s;
		Solve(s,n);
	}
}