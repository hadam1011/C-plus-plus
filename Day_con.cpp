#include<iostream>
#include <algorithm>
#include <set>
#include <vector>
#include <cmath>

using namespace std;

void EnterArray(vector<long int> &a, int n, vector<long int> &b){
	for(int i=0; i<n; i++){
		long int x;
		cin >> x;
		a.push_back(x);
		b.push_back(x);
	}	
}

void FindPosition(vector<long int> a, vector<long int> b, int n){
	int pos1,pos2;
	for(int i=0; i<n; i++){
		if(a[i] != b[i]){
			pos1 = i+1;
			break;
		}
	}
	int check = 0;
	for(int i=n-1; i>pos1; i--){
		if(a[i] != b[i]){
			pos2 = i+1;
			check = 1;
			break;
		}
	}
	if(check == 0) pos2 = n;	
	cout << pos1 << " " << pos2 << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<long int> a;
		vector<long int> b;
 		EnterArray(a,n,b);
		sort(b.begin(),b.end());
		FindPosition(a,b,n);		
	}
}