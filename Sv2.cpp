#include<iostream>
#include <algorithm>
#include <string>
#include <iomanip>
#include <sstream>
#include <vector>

using namespace std;

// Sap xep sv theo ma 
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
    return a.ma < b.ma;
}

int main(){
    SinhVien a;
    vector<SinhVien> List;
    while(cin >> a) List.push_back(a);
    sort(List.begin(),List.end());
    for(auto x:List) cout << x;
}