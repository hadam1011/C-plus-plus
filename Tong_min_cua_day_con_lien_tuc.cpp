#include<iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <vector>

#define For(i,a,b) for(int i=a; i<b; i++)
#define testcase() int t; cin >> t; while(t--)

using namespace std;
using ll = long long;

void Solve(vector<int> a, int n){
	ll sum1=0, sum2=0;
	For(i,0,n){
		sum1 += a[i];
		if(sum1 > sum2) sum2 = sum1;
		if(sum1 < 0) sum1 = 0;
	}
	if(sum2) cout << sum2 << endl;
	else cout << -1 << endl;
}

int main(){
	testcase(){
		int n;
		cin >> n;
		vector<int> a;
		For(i,0,n){
			int x;
			cin >> x;
			a.push_back(x);
		}
		Solve(a,n);
	}
}