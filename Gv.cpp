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
        string hvten,mon,ma,ten;
        static int stt;
    public:
        friend istream& operator >> (istream &in, GiangVien &a);
        friend ostream& operator << (ostream &out, GiangVien a);
        friend bool operator < (GiangVien a, GiangVien b);
        void TangStt();
        string getMon();
};

int GiangVien::stt = 0;
void GiangVien::TangStt(){
    stt++;
}

string GiangVien::getMon(){
    string token, tmp="";
    stringstream ss(mon);
    while(ss >> token) tmp += toupper(token[0]);
    return tmp;
}

string GetTen(string s){
    string token, tmp;
    stringstream ss(s);
    while(ss >> token) tmp = token;
    return tmp;
}

istream& operator >> (istream &in, GiangVien &a){
    a.TangStt();
    a.ma = "GV" + string(2-to_string(a.stt).length(),'0') + to_string(a.stt);
    getline(in,a.hvten);
    getline(in,a.mon);
    a.ten = GetTen(a.hvten);
    return in;
}

ostream& operator << (ostream &out, GiangVien a){
    out << a.ma << " " << a.hvten << " " << a.getMon() << endl;
    return out;
}

bool operator < (GiangVien a, GiangVien b){
    if(a.ten == b.ten) return a.ma < b.ma;
    return a.ten < b.ten;
}

int main(){
    int n; cin >> n; 
    cin.ignore();
    GiangVien ds[n];
    For(i,0,n) cin >> ds[i];
    sort(ds,ds+n);
    For(i,0,n) cout << ds[i];
}