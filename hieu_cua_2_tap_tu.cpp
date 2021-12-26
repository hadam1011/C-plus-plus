#include<iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

void FindWords(vector<string> s1, vector<string> s2, vector<string> &tmp){
	for(int i=0; i<s1.size(); i++){
		int check1=0, check2=0;
		for(int j=0; j<s2.size(); j++){
			if(s1[i] == s2[j]){
				check1 = 1;
				break;
			}
		}
		if(!check1){
			for(int k=0; k<tmp.size(); k++){
				if(s1[i] == tmp[k]){
					check2 = 1;
					break;
				} 
			}
			if(!check2) tmp.push_back(s1[i]);
		}
	}
}

void List(string s1, vector<string> &s2){
	while(s1.find(" ") != -1){
		int pos = s1.find(" ");
		s2.push_back(s1.substr(0,pos));
		s1.erase(0,pos+1);
	}
	s2.push_back(s1);
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s1,s2;
		getline(cin,s1);
		getline(cin,s2);
		vector<string> word_s1, word_s2, result;
		List(s1,word_s1);
		List(s2,word_s2);
		FindWords(word_s1,word_s2,result);
		sort(result.begin(),result.end());
		for(int i=0; i<result.size(); i++){
			cout << result[i] << " ";
		}
		cout << endl;
	}
}