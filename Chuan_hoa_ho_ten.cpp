#include<iostream>
#include <algorithm>
#include <string>
#include <iomanip>
#include <vector>
#include <sstream>

#define For(i,a,b) for(int i=a; i<b; i++)
#define testcases() int t; cin >> t; while(t--)

using namespace std;
using ll = long long;
using l = long int;
const ll mod = 1e9+7;

void chuanhoa1(string s, vector<string> v){
	cout << v.back() << " ";
	for(int i=0; i<v.size()-1; i++) cout << v[i] << " ";
	cout << endl;
}

void chuanhoa2(string s, vector<string> v){	
	for(int i=1; i<v.size(); i++) cout << v[i] << " ";
	cout << v[0] << endl;
}

int main(){
	testcases(){
		int n;
		cin >> n;
		cin.ignore();
		string s,token;
		getline(cin,s);
		for(int i=0; i<s.length(); i++) s[i] = tolower(s[i]);
		vector<string> v;
		stringstream ss(s);
		while(ss >> token) v.push_back(token);	
		for(int i=0; i<v.size(); i++) v[i][0] -= 32;	
		switch (n){
			case 1: 
				chuanhoa1(s,v);
				break;
			case 2: 
				chuanhoa2(s,v);
				break;
		}
	}
}