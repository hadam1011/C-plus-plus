#include<iostream>
#include <algorithm>
#include <set>
#include <vector>
#include <cmath>

using namespace std;

void EnterArray(vector<long int> &a, long int n){
	for(long int i=0; i<n; i++){
		long int x;
		cin >> x;
		a.push_back(x);
	}	
}

int main(){
	int n,k,b;
	cin >> n >> k >> b;
	vector<int> check;
	for(int i=1; i<=n; i++){
		check.push_back(0);
	}		
	while(b--){
		int x;
		cin >> x;
		check[x] = 1;
	}
	int count = 0;
	for(int i=1; i<=k; i++){
		if(check[i] == 1) count++;
	}
	int ans = count;
	for(int i=k+1; i<=n; i++){
	    count += check[i] - check[i-k];
		ans = min(ans,count);
	}
	cout << ans << endl;
}