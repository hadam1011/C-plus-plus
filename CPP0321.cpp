/*HIỆU HAI SỐ NGUYÊN LỚN*/
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

void Subtraction(string s1, string s2){
	vector<int> tmp;
	int n = 0;
	for(int i=s1.length()-1; i>=0; i--){
		int a = s1[i] - '0';
		int b = s2[i] - '0';
		if(a > b+n){
			tmp.push_back(a-b-n);
			n = 0;
		}else if(a < b+n){
			tmp.push_back(a-b-n+10);
			n = 1;
		}else{
			tmp.push_back(a-b-n);
			n = 0;
		}
	}
	for(int i=tmp.size()-1; i>=0; i--){
		cout << tmp[i];
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s1,s2;
		cin >> s1 >> s2;
		if(s1.length() < s2.length()){
			int count = s2.length() - s1.length();
			swap(s1,s2);
			s2.insert(0,count,'0');
		}else if(s2.length() < s1.length()){
			int count = s1.length() - s2.length();
			s2.insert(0,count,'0');
		}else if(s1 < s2 && s1.length() == s2.length()){
			swap(s2,s1);
		}
		Subtraction(s1,s2);
		cout << endl;
	}
}