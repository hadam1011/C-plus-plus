#include<iostream>
#include <algorithm>
#include <string>
#include <set>
#include <vector>

#define For(i,a,b) for(int i=a; i<b; i++)
#define testcase() int t; cin >> t; while(t--)

using namespace std;
using ll = long long;

void Solve(ll a[], ll b[], ll c[], int n1, int n2, int n3){
    set<ll> result;
    int i=0, j=0, k=0;
    while(i<n1 && j<n2 && k<n3){
        if(a[i]==b[j] && b[j]==c[k]){
            result.insert(a[i]);
            j++; i++; k++;
        }else if(a[i] < b[j]) i++;
        else if(b[j] < c[k]) j++;
        else k++;
    }
    if(result.empty()) cout << -1;
    else{
        for(auto x:result) cout << x << " ";
    }  
    cout << endl;
}

int main(){
    testcase(){
        int n1,n2,n3;
        cin >> n1 >> n2 >> n3;
        ll a[n1],b[n2],c[n3];
        For(i,0,n1) cin >> a[i];
        For(i,0,n2) cin >> b[i];
        For(i,0,n3) cin >> c[i];
        Solve(a,b,c,n1,n2,n3);
    }
}