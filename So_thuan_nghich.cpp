#include<iostream>
#include <algorithm>
#include <string>
#include <map>
#include <set>

#define For(i,a,b) for(int i=a; i<b; i++)
#define testcases() int t; cin >> t; while(t--)

using namespace std;

struct List{
    string number;
    int count;
};

int Check(string s){
    if(s.length() < 3) return 0;
    int n = s.length();
    for(int i=0; i<=n/2; i++){ 
        if(s[i] != s[n-i-1]) return 0;
    }
    return 1;
}

bool cmp(List a, List b){
    if(a.number.length() != b.number.length()) return a.number.length() > b.number.length();
    else return a.number > b.number;
}

void Solve(List res[], int n){
    sort(res,res+n,cmp);
    For(i,0,n) cout << res[i].number << " " << res[i].count << endl;
}

int main(){
    string s;
    List ds[1000];
    map<string,int> v;
    int n=0;
    while(cin >> s){
        if(Check(s)){
            ds[n++].number = s;   
            v.insert({s,0});
        }
        if(v.count(s) != 0) v[s]++;
    }
    
    List res[1000]; int m=0;
    for(pair<string,int> x:v){
        res[m].number = x.first;
        res[m++].count = x.second;
    }
    Solve(res,m);
}