#include<iostream>
#include <algorithm>
#include <string>
#include <iomanip>
#include <vector>

#define For(i,a,b) for(int i=a; i<b; i++)
#define testcases() int t; cin >> t; while(t--)

using namespace std;

struct MatHang{
    int ma;
    string ten,nhom;
    double gmua,gban,lai;
};

void Nhaptt(MatHang ds[], int n){
    For(i,0,n){
        cin.ignore();
        getline(cin,ds[i].ten);
        getline(cin,ds[i].nhom);
        cin >> ds[i].gmua >> ds[i].gban;
        ds[i].lai = ds[i].gban - ds[i].gmua;  
        ds[i].ma = i+1;
    }
}

bool cmp(MatHang a, MatHang b){
    return a.lai > b.lai;
}

void Intt(MatHang ds[], int n){
    For(i,0,n){
        cout << ds[i].ma << " " << ds[i].ten << " " << ds[i].nhom << " ";
        cout << fixed << setprecision(2) << ds[i].lai << endl;
    }
}

int main(){
    int n;
    cin >> n;
    MatHang ds[n];
    Nhaptt(ds,n);
    sort(ds,ds+n,cmp);
    Intt(ds,n);
}