#include<iostream>
#include <algorithm>
#include <string>
#include <iomanip>
#include <sstream>

using namespace std;

// Sap xep sv theo lop (theo tt tu dien)
class SinhVien{
    private:
        string ma,ten,lop,email;
    public:
        friend istream& operator >> (istream &in, SinhVien &a);
        friend ostream& operator << (ostream &out, SinhVien a);
        friend bool operator < (SinhVien a, SinhVien b);
};

istream& operator >> (istream &in, SinhVien &a){
    in >> a.ma;
    in.ignore();
    getline(in,a.ten); 
    in >> a.lop >> a.email;
    return in;
}

ostream& operator << (ostream &out, SinhVien a){
    out << a.ma << " " << a.ten << " " << a.lop << " " << a.email << endl;
    return out;
}

bool operator < (SinhVien a, SinhVien b){
    if(a.lop == b.lop) return a.ma < b.ma;
    return a.lop < b.lop;
}

int main(){
    int n; 
    cin >> n;
    SinhVien ds[n];
    for(int i=0; i<n; i++) cin >> ds[i];
    sort(ds,ds+n);
    for(int i=0; i<n; i++) cout << ds[i];
}