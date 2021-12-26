#include<iostream>
#include <algorithm>
#include <string>
#include <iomanip>
#include <sstream>

using namespace std;

class NhanVien{
    private:
        string ma,ten,ns,gt,mt,dc,ngaykhd;
        int static stt;
        string ngay,thang,nam;
    public: 
        friend istream& operator >> (istream &in, NhanVien &a);
        friend ostream& operator << (ostream &out, NhanVien a);
        friend bool operator < (NhanVien a, NhanVien b);
        void TangStt();
};

int NhanVien::stt = 0;

void NhanVien::TangStt(){
    stt++;
}

bool operator < (NhanVien a, NhanVien b){
    if(a.nam != b.nam) return a.nam < b.nam;
    else if(a.thang != b.thang) return a.thang < b.thang;
    else return a.ngay < b.ngay;
}

istream& operator >> (istream &in, NhanVien &a){
    a.TangStt(); 
    a.ma = string(5-to_string(a.stt).length(),'0') + to_string(a.stt);
    in.ignore();
    getline(in,a.ten);
    in >> a.gt >> a.ns; // input ns dang mm/dd/yyyy
    scanf("\n"); getline(in,a.dc);
    in >> a.mt >> a.ngaykhd;
    a.thang = a.ns.substr(0,2);
    a.ngay = a.ns.substr(3,2);
    a.nam = a.ns.substr(6,4);
    return in;
}

ostream& operator << (ostream &out, NhanVien a){
    out << a.ma << " " << a.ten << " " << a.gt << " ";
    out << a.ns << " " << a.dc << " " << a.mt << " " << a.ngaykhd << endl;
    return out;
}

void sapxep(NhanVien ds[], int n){
    sort(ds,ds+n);
}

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}