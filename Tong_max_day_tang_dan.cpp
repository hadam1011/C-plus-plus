#include<iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <vector>

#define For(i,a,b) for(int i=a; i<b; i++)
#define testcase() int t; cin >> t; while(t--)

using namespace std;
using ll = long long;

void Solve(long int a[], int n){
    ll res[n], ans=0; // mảng res là mảng lưu giá trị tổng max của dãy tăng dần đến vị trí i
    For(i,0,n){
        res[i] = a[i];
        For(j,0,i){
            if(a[i] > a[j]) res[i] = max(res[i],res[j]+a[i]); 
        }
        ans = max(ans,res[i]);
    }
    cout << ans << endl;
}

int main(){
    testcase(){
        int n;
        cin >> n;
        long int a[n];
        For(i,0,n) cin >> a[i];
        Solve(a,n);
    }
}