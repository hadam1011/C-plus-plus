#include<iostream>
#include <algorithm>
#include <string>
#include <set>
#include <map>

using namespace std;

int Solve(string s){
	int len=s.length(), a[26]={};
	for(int i=0; i<len; i++){
		a[s[i]-'a']++;
	}
	set<int> st;
	for(int i=0; i<26; i++){
		st.insert(a[i]);
	}
	int max = *st.rbegin();
	if(max <= len-max+1) return 1;
	return 0;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		cout << Solve(s) << endl;
	}
}