#include<iostream>
#include <algorithm>
#include <string>
#include <iomanip>
#include <sstream>
#include <vector>

using namespace std;
#define For(i,a,b) for (int i=a; i<b; i++)

class SinhVien{
    private:
        string ten,ma,lop,email;
    public:
        friend istream& operator >> (istream &in, SinhVien &a);
        friend ostream& operator << (ostream &out, SinhVien a);
        string getLop(){
            return lop;
        }
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

int main(){
    int n; cin >> n; 
    SinhVien ds[n];
    For(i,0,n) cin >> ds[i];
    int q; cin >> q;
    while(q--){
        string s; cin >> s;
        cout << "DANH SACH SINH VIEN LOP " << s << ":" << endl;
        For(i,0,n) 
            if(ds[i].getLop() == s)
            cout << ds[i];
    }
}