#include<iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

void EnterArray(vector<int> &a, int n){
	for(int i=0; i<n; i++){
		int x;
		cin >> x;
		a.push_back(x);
	}	
}

int BalancePoint(vector<int> a, int n){
	int pos = 1;
	long long sumleft=0, sumright=0;
	for(int i=0; i<pos; i++){
		sumleft += a[i];
	}
	for(int i=pos+1; i<n; i++){
		sumright += a[i];
	}
	if(sumleft == sumright) return pos+1;
	else{
		while(pos < n-1){
			pos++;
			sumleft += a[pos-1];
			sumright -= a[pos];
			if(sumleft == sumright) return pos+1;
		}
	}
	return -1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> a;
 		EnterArray(a,n);
		cout << BalancePoint(a,n) << endl;
	}
}