#include<iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <vector>

#define For(i,a,b) for(int i=a; i<b; i++)
#define testcases() int t; cin >> t; while(t--)

using namespace std;
using ll = long long;
const ll mod = 1e9+7;

void Lowercase(string &s){
	For(i,0,s.length()){
		s[i] = tolower(s[i]);
	}
}

void Chuanhoa(string &s){
	stringstream ss(s);
	string token, tmp="";
	vector<string> words;
	while(ss >> token) words.push_back(token);
	s = tmp+words.back();
	For(i,0,words.size()-1) s += words[i][0];
}

int main(){
	int n;
	string s;
	cin >> n;
	cin.ignore();
	vector<string> list;
	while(n--){
		getline(cin,s);
		Lowercase(s);
		list.push_back(s);
	}
	For(i,0,list.size()){
		Chuanhoa(list[i]);
		int count = 1;
		For(j,0,i) if(list[i] == list[j]) count++;
		if(count == 1) cout << list[i] << "@ptit.edu.vn" << endl;
		else cout << list[i] << count << "@ptit.edu.vn" << endl;
	}
}