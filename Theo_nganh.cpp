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
        string getMa(){
            return ma;
        }
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

void ChuanHoa(string &s){
    int check = 0;
    string token, tmp="DC";
    stringstream ss(s);
    while(ss >> token){
        if(check++ < 2) tmp += token[0];
    }
    s = tmp;
}

void Uppercase(string &s){
    For(i,0,s.length()) s[i] = toupper(s[i]);
}

int main(){
    int n; cin >> n; 
    SinhVien ds[n];
    For(i,0,n) cin >> ds[i];
    int q; cin >> q;
    cin.ignore();
    while(q--){
        string s;
        getline(cin,s); Uppercase(s);
        cout << "DANH SACH SINH VIEN NGANH " << s << ":" << endl;
        ChuanHoa(s);
        For(i,0,n) 
            if(ds[i].getMa().find(s) != -1)
                if((s == "DCCN" || s == "DCAT") && ds[i].getLop()[0] != 'E')
                    cout << ds[i];
                else if(s != "DCCN" && s != "DCAT") 
                	cout << ds[i];
    }
}