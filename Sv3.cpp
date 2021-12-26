#include<iostream>
#include <algorithm>
#include <string>
#include <iomanip>
#include <sstream>

using namespace std;

class SinhVien{
    private:
        string ma,ten,lop,ns;
        float diem;
        int static stt;
    public:
        SinhVien();
        friend istream& operator >> (istream &in, SinhVien &a);
        friend ostream& operator << (ostream &out, SinhVien a);
        friend bool operator < (SinhVien a, SinhVien b);
        friend void ChuanHoaNs (SinhVien &a);
        friend void ChuanHoaTen (SinhVien &a);
        void TangStt();
        int GetStt();
};

int SinhVien::stt = 0;
SinhVien::SinhVien(){
    ma = ten = lop = ns = "";
    diem = 0;
}

void SinhVien::TangStt(){
    stt++;
}

int SinhVien::GetStt(){
    return stt;
}

bool operator < (SinhVien a, SinhVien b){
    return a.diem > b.diem;
}

void ChuanHoaTen(SinhVien &a){
    string tmp="", token;
    stringstream ss(a.ten);
    while(ss >> token){
        tmp += toupper(token[0]);
        for(int i=1; i<token.length(); i++){
            tmp += tolower(token[i]);
        }
        tmp += " ";
    }
    tmp.erase(tmp.length()-1);
    a.ten = tmp;
}

void ChuanHoaNs(SinhVien &a){
    if(a.ns[2] != '/') a.ns.insert(0,1,'0');
    if(a.ns[5] != '/') a.ns.insert(3,1,'0');
}

istream& operator >> (istream &in, SinhVien &a){
    a.TangStt(); a.GetStt();
    a.ma = "B20DCCN" + string(3-to_string(a.stt).length(),'0') + to_string(a.stt);
    in.ignore();
    getline(in,a.ten);
    in >> a.lop >> a.ns >> a.diem;
    return in;
}

ostream& operator << (ostream &out, SinhVien a){
    ChuanHoaNs(a);
    ChuanHoaTen(a);
    out << a.ma << " " << a.ten << " " << a.lop << " ";
    out << a.ns << " " << fixed << setprecision(2) << a.diem << endl;
    return out;
}

void sapxep(SinhVien ds[], int n){
    sort(ds,ds+n);
}

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}