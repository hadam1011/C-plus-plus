#include<iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int Check(string s){
	string tmp;
	for(int i=s.length()-1; i>=0; i--){
		tmp.push_back(s[i]);
	}
	if(tmp == s) return 1;
	else return 0;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s,tmp;
		cin >> s;
		for(int i=0; i<s.length(); i++){
			if(s[i] >= 'A' && s[i] <= 'C' || s[i] >= 'a' && s[i] <= 'c'){
				s[i] = '2';
			}else if(s[i] >= 'D' && s[i] <= 'F' || s[i] >= 'd' && s[i] <= 'f'){
				s[i] = '3';
			}else if(s[i] >= 'G' && s[i] <= 'I' || s[i] >= 'g' && s[i] <= 'i'){
				s[i] = '4';
			}else if(s[i] >= 'J' && s[i] <= 'L' || s[i] >= 'j' && s[i] <= 'l'){
				s[i] = '5';
			}else if(s[i] >= 'M' && s[i] <= 'O' || s[i] >= 'm' && s[i] <= 'o'){
				s[i] = '6';
			}else if(s[i] >= 'P' && s[i] <= 'S' || s[i] >= 'p' && s[i] <= 's'){
				s[i] = '7';
			}else if(s[i] >= 'T' && s[i] <= 'V' || s[i] >= 't' && s[i] <= 'v'){
				s[i] = '8';
			}else if(s[i] >= 'W' && s[i] <= 'Z' || s[i] >= 'w' && s[i] <= 'z'){
				s[i] = '9';
			}
		}
		if(Check(s)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}