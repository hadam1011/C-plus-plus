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

void MaxNumber(int m, int s, int max[]){
	For(i,0,m){
		if(s >= 9){
			max[i] = 9;
			s -= 9;
		}else if(s < 9){
			max[i] = s;
			s = 0;
		}else break;
	}
	For(i,0,m) cout << max[i];
}

void MinNumber(int m, int s, int min[]){
	s--;
	for(int i=m-1; i>=0; i--){
		if(s >= 9){
			min[i] = 9;
			s -= 9;
		}else if(s < 9){
			min[i] = s;
			s = 0;
		}else break;
	}
	min[0]++;
	For(i,0,m) cout << min[i];
	cout << " ";
}

int main(){
	int m,s;
	cin >> m >> s;
	int min[m]={0} ,max[m]={0};
	if(s > 9*m || (s==0 && m>1)) cout << "-1 -1" << endl;
	else{
		MinNumber(m,s,min);
		MaxNumber(m,s,max);
	}
}