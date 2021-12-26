#include<iostream>
#include <algorithm>
#include <string>
#include <map>
#include <vector>

#define For(i,a,b) for(int i=a; i<b; i++)
#define testcases() int t; cin >> t; while(t--)

using namespace std;

int main(){
    testcases(){
        int n; cin >> n;
        int a[n];
        vector<int> s;
        For(i,0,n){
            cin >> a[i];
            s.push_back(a[i]);
        }
        sort(s.begin(),s.end());
        For(i,0,n){
            auto it = upper_bound(s.begin(),s.end(),a[i]);
            if(it == s.end()) cout << "_" << " ";
            else cout << *it << " ";
        }
        cout << endl;
    }
}