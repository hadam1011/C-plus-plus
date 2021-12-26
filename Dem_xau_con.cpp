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

int Solve(string s, int x, int k){
	int check[26]={}, count=0, ans=0;
	For(i,0,x) check[s[i]-'a']++;
	For(i,0,26) if(check[i]) count++;
	if(count == k) ans++;
	For(i,x,s.length()){
		check[s[i]-'a']++; if(check[s[i]-'a'] == 1) count++;
		check[s[i-x]-'a']--; if(check[s[i-x]-'a'] == 0) count--;
		if(count == k) ans++;
	}
	return ans;
}

int main(){
	testcases(){
		string s;
		int k, ans=0;
		cin >> s >> k;
		int i = k;
		while(i<=s.length()){
			ans += Solve(s,i,k);
			i++;
		}
		cout << ans << endl;
	}
}