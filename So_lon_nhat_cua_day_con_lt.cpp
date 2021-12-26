#include<iostream>
#include <algorithm>
#include <string>
#include <set>
#include <vector>

#define For(i,a,b) for(int i=a; i<b; i++)
#define testcase() int t; cin >> t; while(t--)

using namespace std;

int Max(int a[], int k, int n){
    vector<int> v;
    For(i,k,n) v.push_back(a[i]);
    sort(v.begin(),v.end());
    return v.back();
}

void Solve(int a[], int n, int k){
    int mx = Max(a,0,k);
    cout << mx << " ";
    For(i,k,n){
        if(a[i-k] == mx){
            mx = Max(a,i-k+1,i+1);
        }
        else if(a[i] > mx) mx = a[i];
        cout << mx << " ";
    }
    cout << endl;
}

int main(){
    testcase(){
        int n,k; cin >> n >> k;
        int a[n];
        For(i,0,n) cin >> a[i];
        Solve(a,n,k);
    }
}