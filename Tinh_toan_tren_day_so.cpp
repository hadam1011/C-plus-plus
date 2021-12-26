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

ll Result(ll x, int y){
	ll ans = 1;
	For(i,0,y) ans = ans*x%mod;
	return ans%mod;
}

void Solve(int a[], int n){
	ll mul = 1;
	int gx = a[0];
	For(i,0,n){
		mul = (mul*a[i])%mod;
		gx = __gcd(gx,a[i]);
	}
	cout << Result(mul,gx) << endl;
}

int main(){
	testcases(){
		int n,a[10000];
		cin >> n;
		For(i,0,n) cin >> a[i];
		Solve(a,n);
	}
}