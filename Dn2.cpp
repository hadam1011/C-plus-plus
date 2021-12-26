#include<iostream>
#include <algorithm>
#include <string>
#include <iomanip>
#include <sstream>
#include <vector>

using namespace std;
#define For(i,a,b) for (int i=a; i<b; i++)

class DoanhNghiep{
    private:
        string ma,ten;
        int sv;
    public:
        friend istream& operator >> (istream &in, DoanhNghiep &a);
        friend ostream& operator << (ostream &out, DoanhNghiep a);
        bool operator < (DoanhNghiep a);
        int getSv(){
            return sv;
        }
};

istream& operator >> (istream &in, DoanhNghiep &a){
    in >> a.ma;
    in.ignore();
    getline(in,a.ten);
    in >> a.sv;
    return in;
}

ostream& operator << (ostream &out, DoanhNghiep a){
    out << a.ma << " " << a.ten << " " << a.sv << endl;
    return out;
}

bool DoanhNghiep::operator < (DoanhNghiep a){
    if(this->sv != a.sv) return this->sv > a.sv;
    return this->ma < a.ma;
}

int main(){
    int n;
    cin >> n;
    DoanhNghiep ds[n];
    For(i,0,n) cin >> ds[i];
    int q; cin >> q;
    while(q--){
        int a,b; 
        cin >> a >> b;
        cout << "DANH SACH DOANH NGHIEP NHAN TU " << a << " DEN " << b << " SINH VIEN:\n";
        sort(ds,ds+n);
        For(i,0,n) 
            if(ds[i].getSv()<= b && ds[i].getSv() >= a)
            cout << ds[i];
    }
}
