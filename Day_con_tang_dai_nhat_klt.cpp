#include<iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <vector>

#define For(i,a,b) for(int i=a; i<b; i++)
#define testcase() int t; cin >> t; while(t--)

using namespace std;
using ll = long long;

void Solve(int a[], int n){
	int len[1000];
	len[0] = 1;
	For(i,1,n){
		int lmax = 0;
		For(j,0,i){
			if(a[j] < a[i] && len[j] > lmax)
			lmax = len[j];
		}
		len[i] = lmax+1;
	}
	sort(len,len+n);
	cout << len[n-1] << endl;
}

int main(){
	testcase(){
		int n,a[1000];
		cin >> n;
		For(i,0,n) cin >> a[i];
		Solve(a,n);
	}
}