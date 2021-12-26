#include<iostream>
#include <algorithm>
#include <string>
#include <iomanip>
#include <map>

using namespace std;

int FindPosition(string s, int pos){
	int len=s.length(), res=0;
	char max = '0';
	for(int i=pos+1; i<len; i++){
		if(s[i] < s[pos] && s[i] >= max){
			max = s[i];
			if(s[res] != s[i]) res = i;
		}
	}
	return res;
}

string Solve(string &s){
	string tmp = "-1";
	int len=s.length(), pos=-1;
	for(int i=len-1; i>0; i--){
		if(s[i] < s[i-1]){
			pos = i-1;
			break;
		}
	}
	if(pos == -1) return tmp;
	swap(s[pos],s[FindPosition(s,pos)]);
	return s;
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