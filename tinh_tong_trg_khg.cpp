#include<iostream>
#include <algorithm>
#include <string>
#include <map>
#include <vector>

#define For(i,a,b) for(int i=a; i<b; i++)
#define testcase() int t; cin >> t; while(t--)

using namespace std;
using ll = long long;

int main(){
    testcase(){
        int n,q,a[10000];
        cin >> n >> q;
        For(i,0,n){
            cin >> a[i];
        }
        while(q--){
            int l,r,sum=0;
            cin >> l >> r;
            For(i,l-1,r){
                sum += a[i];
            }
            cout << sum << endl;
        }
    }
}

