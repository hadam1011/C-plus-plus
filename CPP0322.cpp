/*TỔNG HAI SỐ NGUYÊN LỚN*/
#include<iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <math.h>

using namespace std;

void Sum(string s1, string s2){
	vector<int> tmp;
	if(s1.length() < s2.length()){
		int count = s2.length()-s1.length();
		s1.insert(0,count,'0');
	}else{
		int count = s1.length()-s2.length();
		s2.insert(0,count,'0');
	}
	int len=s1.length(), nho=0;
	for(int i=len-1; i>=0; i--){
		int a = s1[i] - '0';
		int b = s2[i] - '0';
		if(a+b+nho < 10 && i > 0){
			tmp.push_back(a+b+nho);
			nho = 0;
		}else if(a+b+nho > 9 && i > 0){
			tmp.push_back(a+b+nho-10);
			nho = 1;
		}
		if(i == 0){
			tmp.push_back(a+b+nho);
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
		Sum(s1,s2); 
		cout << endl;
	}
}