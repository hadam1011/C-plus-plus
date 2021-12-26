#include<iostream>
#include <algorithm>
#include <string>
#include <iomanip>
#include <sstream>
#include <vector>

using namespace std;
#define For(i,a,b) for (int i=a; i<b; i++)

class GiangVien{
    private:
        string ten,mon,ma;
        static int stt;
    public:
        friend istream& operator >> (istream &in, GiangVien &a);
        friend ostream& operator << (ostream &out, GiangVien a);
        string getMon();
        void TangStt(){
            stt++;
        }
        string getTen(){
            return ten;
        }
};

int GiangVien::stt = 0;

string GiangVien::getMon(){
    string tmp,token;
    stringstream ss(mon);
    while(ss >> token) tmp += toupper(token[0]);
    return tmp;
}

istream& operator >> (istream &in, GiangVien &a){
    a.TangStt();
    if(a.stt < 10) a.ma = "GV0" + to_string(a.stt);
    else a.ma = "GV" + to_string(a.stt);
    getline(in,a.ten);
    getline(in,a.mon);
    return in;
}

ostream& operator << (ostream &out, GiangVien a){
    out << a.ma << " " << a.ten << " " << a.getMon() << endl;
    return out;
}

string Lowercase(string s){
    string tmp;
    For(i,0,s.length()) s[i] = tolower(s[i]);
    return tmp = s;
}

int main(){
    int n; 
    cin >> n;
    cin.ignore();
    GiangVien ds[n];
    For(i,0,n) cin >> ds[i];
    int q;
    cin >> q;
    while(q--){
        string s;
        cin >> s;
        cout << "DANH SACH GIANG VIEN THEO TU KHOA " << s << ":\n";
        s = Lowercase(s);
        For(i,0,n) 
            if(Lowercase(ds[i].getTen()).find(s) != -1)
            cout << ds[i];
    }
}