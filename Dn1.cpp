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
    if(this->sv == a.sv) return this->ma < a.ma; 
    return this->sv > a.sv;
}

int main(){
    int n;
    cin >> n;
    DoanhNghiep ds[n];
    For(i,0,n) cin >> ds[i];
    sort(ds,ds+n);
    For(i,0,n) cout << ds[i];
}