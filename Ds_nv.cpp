#include<iostream>
#include <algorithm>
#include <string>
#include <iomanip>
#include <vector>

#define For(i,a,b) for(int i=a; i<b; i++)
#define testcases() int t; cin >> t; while(t--)

using namespace std;

int i=1;
struct NhanVien{
    string ten,gt,ns,dc,mathue,ngaykyhd;
    string ngay,thang,nam;
    int ma;
};

bool cmp(NhanVien a, NhanVien b){
    if(a.nam != b.nam) return a.nam < b.nam;
    else if(a.thang != b.thang) return a.thang < b.thang;
    else return a.ngay < b.ngay;
}

void nhap(NhanVien &ds){
    ds.ma = i++;
    cin.ignore();
    getline(cin, ds.ten);
    cin >> ds.gt >> ds.ns;
    scanf("\n");
    getline(cin, ds.dc);
    cin >> ds.mathue >> ds.ngaykyhd;

    string tmp=ds.ns, token;
    while(tmp.find("/") != -1) tmp.replace(tmp.find("/"),1," ");
    stringstream ss(tmp);
    int check = 0;
    while(ss >> token){
        if(check == 1) ds.ngay = token;
        else if(check == 0) ds.thang = token;
        else ds.nam = token;
        check++;
    }
}

void sapxep(NhanVien ds[], int n){
    sort(ds,ds+n,cmp);
}

void inds(NhanVien ds[], int n){
    For(i,0,n){
        if(ds[i].ma < 10) cout << "0000" << ds[i].ma << " ";
        else cout << "000" << ds[i].ma << " ";
        cout << ds[i].ten << " " << ds[i].gt << " " << ds[i].ns << " ";
        cout << ds[i].dc << " " << ds[i].mathue << " " << ds[i].ngaykyhd << endl;
    }
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}