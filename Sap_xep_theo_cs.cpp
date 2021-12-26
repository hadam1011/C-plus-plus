#include<iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <vector>

#define For(i,a,b) for(int i=a; i<b; i++)
#define testcase() int t; cin >> t; while(t--)

using namespace std;
using ll = long long;

bool cmp(string a, string b){
	return a+b > b+a;
}

int main(){
	testcase(){
		int n;
		cin >> n;
		cin.ignore();
		string a[n];
		For(i,0,n){
			cin >> a[i];
		}
		sort(a,a+n,cmp);
		for(string x : a){
			cout << x;
		}
		cout << endl;
	}
}

