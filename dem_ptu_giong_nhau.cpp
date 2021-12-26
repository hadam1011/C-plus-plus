#include<iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>

using namespace std;

void EnterMatrix(int a[100][100], int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++)
			cin >> a[i][j];
	}
}

int Result(int a[100][100], int n){
	int count = 0;
	map<int,int> mp;
	for(int i=0; i<n; i++){
		mp[a[0][i]] = 1;
	}
	for(int i=1; i<n; i++){
		for(int j=0; j<n; j++){
			if(mp[a[i][j]] == i){
				mp[a[i][j]]++;
			}
		}
	}
	for(auto it : mp){
		if(it.second == n)
			count++;
	}
	return count;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,a[100][100];
		cin >> n;
		EnterMatrix(a,n);
		cout << Result(a,n) << endl;
	}
}