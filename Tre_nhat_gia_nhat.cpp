#include<iostream>
#include <algorithm>
#include <string>
#include <iomanip>
#include <vector>

#define For(i,a,b) for(int i=a; i<b; i++)
#define testcases() int t; cin >> t; while(t--)

using namespace std;

struct ConNguoi{
    string ten,ns;
    string ngay,thang,nam;
};

void nhaptt(ConNguoi ds[], int n){
    For(i,0,n){
        cin >> ds[i].ten >> ds[i].ns;
        string s;
        while(ds[i].ns.find("/") != -1){
            ds[i].ns.replace(ds[i].ns.find("/"),1," ");
        }
        stringstream ss(ds[i].ns);
        int check=0;
        while(ss >> s){
            if(check ==0 ) ds[i].ngay = s;
            else if(check == 1) ds[i].thang = s;
            else ds[i].nam = s;
            check++;
        }
    }
}

bool cmp(ConNguoi a, ConNguoi b){
    if(a.nam != b.nam) return a.nam < b.nam;
    else if(a.thang != b.thang) return a.thang < b.thang;
    else return a.ngay < b.ngay;
}

void in(ConNguoi ds[], int n){
    sort(ds,ds+n,cmp);
    cout << ds[n-1].ten << endl << ds[0].ten;
}

int main(){
    int n;
    cin >> n;
    ConNguoi ds[n];
    nhaptt(ds,n);
    in(ds,n);
}