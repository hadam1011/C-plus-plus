#include<iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

using namespace std;
using ll = long long;
#define test() int t; cin >> t; while(t--)
#define For(i,a,b) for(int i=a; i<b; i++)


void Solve(int a[], int n, int k){
	ll count = 0;
	int pos;
	For(i,0,n-1){
		pos = lower_bound(a,a+n,a[i]+k) - a;
		count += pos-i-1;
	}
	cout << count << endl;
}

int main(){
	test(){
		int n,k;
		cin >> n >> k;
		int a[n];
		For(i,0,n) cin >> a[i];
		sort(a,a+n);
		Solve(a,n,k);
	}
}