#include<iostream>
#include <algorithm>
#include <string>
#include <map>
#include <vector>

#define For(i,a,b) for(int i=a; i<b; i++)
#define testcase() int t; cin >> t; while(t--)

using namespace std;
using ll = long long;

bool cmp(pair<int,int> a, pair<int,int> b){
    if(a.second == b.second) return a.first < b.first;
    else return a.second > b.second;
}

void Solve(int a[], int n){
    vector<pair<int,int>> v;
    map<int,int> mp;
    For(i,0,n) mp[a[i]] = 0;
    For(i,0,n) mp[a[i]]++;
    For(i,0,n) v.push_back(make_pair(a[i],mp[a[i]]));
    sort(v.begin(),v.end(),cmp);
    For(i,0,n) cout << v[i].first << " ";
    cout << endl;
}

int main(){
    testcase(){
        int n; cin >> n;
        int a[n];
        For(i,0,n) cin >> a[i];
        Solve(a,n);
    }
}