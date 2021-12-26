#include<iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <vector>

#define For(i,a,b) for(int i=a; i<b; i++)
#define testcase() int t; cin >> t; while(t--)

using namespace std;
using ll = long long;

void Solve(int a[], int n, int k){
	int sum=0, end=k-1;
	double ans,x;
	For(i,0,end+1){
		sum += a[i];
 	}
	ans = (double) sum/k;

	int pos1=0 ,pos2=k-1;
	For(i,end+1,n){
		sum = sum-a[i-k]+a[i];
		x = (double) sum/k;
		if(ans < x){
			ans = x;
			pos1 = i-k+1;
			pos2 = i;
		}
	}
	For(i,pos1,pos2+1) cout << a[i] << " ";
	cout << endl;
}

int main(){
	testcase(){
		int n,a[1000],k;
		cin >> n >> k;
		For(i,0,n) cin >> a[i];
		Solve(a,n,k);
	}
}