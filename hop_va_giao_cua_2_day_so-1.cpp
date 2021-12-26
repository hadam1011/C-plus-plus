#include<iostream>
#include <algorithm>
#include <set>
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

void Union(vector<int> a, vector<int> b, set<int> c, int n, int m){
	for(int i=0; i<n; i++){
		c.insert(a[i]);
	}	
	for(int i=0; i<m; i++){
		c.insert(b[i]);
	}
	for(int x : c){
		cout << x << " ";
	}
	cout << endl;
}

void Intersection(vector<int> a, vector<int> b, int n, int m){
	set<int> list;
	for(int i=0; i<n; i++){
		list.insert(a[i]);
	}
	for(int i=0; i<m; i++){
		if(list.find(b[i]) != list.end()){
			cout << b[i] <<  " ";
		}
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,m;
		cin >> n >> m;
		vector<int> a;
		vector<int> b;
 		EnterArray(a,n);
		EnterArray(b,m);
		set<int> unions;
		Union(a,b,unions,n,m);		
		Intersection(a,b,n,m);
	}
}