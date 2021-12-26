#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	string a = "101 A B B A D C C A B D C C A B D";
	string b = "102 A C C A B C D D B B C D D B B";
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		double score = 0;	
		int check = 0;
		if(s.find("101") != -1){
			for(int i=4; i<s.length(); i+=2){
				if(s[i] == a[i]){
					check++;
				}
			}
		}else{
			for(int i=4; i<s.length(); i+=2){
				if(s[i] == b[i]){
					check++;
				}
			}			
		}
		score = (double) 10/15 * check;
		cout << fixed << setprecision(2) << score << endl;
	}
}