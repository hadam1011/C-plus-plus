/*TÍCH HAI SỐ NGUYÊN LỚN*/
#include <iostream>
#include <string>

using namespace std;
#define test() int t; cin >> t; while(t--)
#define For(i,a,b) for(int i=a; i<b; i++)

void Solve(string a, string b){
    int *res;
    res = new int[a.size()+b.size()]();
    for(int i=a.size()-1; i>=0; i--){
        for(int j=b.size()-1; j>=0; j--){
            res[i+j+1] += (a[i]-'0') * (b[j]-'0');
        }
    }

    for(int i=a.size()+b.size()-1; i>=0; i--){
        if(res[i] > 9){
            res[i-1] += res[i]/10;
            res[i] %= 10;
        }
    }
    string tmp = "";
    For(i,0,a.size()+b.size()) tmp += to_string(res[i]);
    delete[] res;
    while(tmp[0]=='0' && tmp.length()>1) tmp.erase(0,1);
    cout << tmp << endl;
}

int main(){
    test(){
        string a,b;
        cin >> a >> b;
        Solve(a,b);       
    }
}