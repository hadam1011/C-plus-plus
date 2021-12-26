#include<iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

void EnterArray(int a[], int n){
	for(int i=0; i<n; i++)
		cin >> a[i];
}

void FindMax(int a[], int n, int len, vector<long long>& v){
	int pos=0;
	long long max = 0;
	while(pos+len <= n){
		long long mul = 1;
		for(int i=pos; i<len+pos; i++){
			mul *= a[i];
			if(mul == 0) break;
		}
		if(mul > max) max = mul;
		pos++;
	}
	v.push_back(max);
	if(len < n){
		len++;
		FindMax(a,n,len,v);
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,a[100];
		cin >> n;
		EnterArray(a,n);
		int len = 1;
		vector<long long> v;
		FindMax(a,n,len,v);
		sort(v.begin(), v.end());
		cout << v.back() << endl;
	}
}