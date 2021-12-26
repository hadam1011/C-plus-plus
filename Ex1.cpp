#include<iostream>
#include <algorithm>
#include <string>
#include <iomanip>
#include <vector>
#include <sstream>

#define For(i,a,b) for(int i=a; i<=b; i++)
#define testcases() int t; cin >> t; while(t--)

using namespace std;
using ll = long long;
using l = long int;
const ll mod = 1e9+7;

void Solve(int a[100][100], int n, int m){
	int h1=1, c1=1, h2=n, c2=m;
	while(h1 <= h2 && c1 <= c2){
		For(i,c1,c2) cout << a[h1][i] << " ";
		h1++;
		For(i,h1,h2) cout << a[i][c2] << " ";
		c2--;
		if(h1 <= h2){
			for(int i=c2; i>=c1; i--)
				cout << a[h2][i] << " ";
			h2--;
		}
		if(c1 <= c2){
			for(int i=h2; i>=h1; i--) 
				cout << a[i][c1] << " ";
			c1++;
		}
	}
	cout << endl;
}

int main(){
	testcases(){
		int n,m,a[100][100];
		cin >> n >> m;
		For(i,1,n) For(j,1,m) cin >> a[i][j];
		Solve(a,n,m);
	}
}