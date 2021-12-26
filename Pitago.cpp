#include<iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <vector>

#define For(i,a,b) for(int i=a; i<b; i++)
#define testcase() int t; cin >> t; while(t--)

using namespace std;
using ll = long long;

int Solve(ll a[], int n){
    For(i,0,n) a[i] *= a[i];
    sort(a,a+n);
    for(int i=n-1; i>=2; i--){
        int l=0, r=i-1;
        while(l < r){
            if(a[l]+a[r] == a[i]) return 1;
            if(a[l]+a[r] < a[i]) l++;
            else r--;
        }        
    }
    return 0;
}

int main(){
    testcase(){
        int n; cin >> n; 
        ll a[n];
        For(i,0,n) cin >> a[i];
        if(Solve(a,n)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}