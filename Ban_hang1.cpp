#include <bits/stdc++.h>

using namespace std;
#define For(i,a,b) for(int i=a; i<b; i++)

int dem = 0;
int x,y;
class HoaDon;
class KhachHang;
class MatHang;

class KhachHang{
    friend class HoaDon;
    public:
        string ten_kh,gt,ns,dc,ma_kh;
        int static count;
    public:
        friend istream& operator >> (istream &in, KhachHang &a){
            scanf("\n");
            getline(cin,a.ten_kh);
            cin >> a.gt >> a.ns;
            cin.ignore();
            getline(cin,a.dc);
            return in;
        }
        friend ostream& operator << (ostream &out, KhachHang a){
            cout << a.ten_kh << " " << a.ns << " " << a.dc << endl;
            return out;
        }
};

class MatHang{
    friend class HoaDon;
    public:
        string ten_mh,dv,ma_mh;
        int gb,gm;
        int static m;
    public:
        friend istream& operator >> (istream &in, MatHang &a){
            scanf("\n");
            getline(cin,a.ten_mh);
            cin >> a.dv >> a.gb >> a.gm;
            return in;
        }
        friend ostream& operator << (ostream &out, MatHang a){
            cout << a.ten_mh << " " << a.dv << endl;
            return out;
        }        
};

KhachHang dskh[25];
MatHang dsmh[45];
class HoaDon{
    private:
        string ma_hd,ma_kh,ma_mh;
        int soluong,giaban;
    public:
        friend istream& operator >> (istream &in, HoaDon &a){
            dem++;
            a.ma_hd = "HD" + string(3-to_string(dem).length(),'0') + to_string(dem);
            cin >> a.ma_kh >> a.ma_mh >> a.soluong;
            return in;
        }
        friend ostream& operator << (ostream &out, HoaDon a){
            x = 0; y = 0;
            string res1 = a.ma_kh.substr(2,3);
            For(i,0,res1.length()) x = x*10 + (res1[i] - '0');
            x -= 1;
            string res2 = a.ma_mh.substr(2,3);
            For(i,0,res2.length()) y = y*10 + (res2[i] - '0');
            y -= 1;
            cout << a.ma_hd << " ";
            cout << dskh[x].ten_kh << " " << dskh[x].dc << " ";
            cout << dsmh[y].ten_mh << " " << dsmh[y].dv << " " << dsmh[y].gm << " " << dsmh[y].gb << " ";
            cout << a.soluong << " " << dsmh[y].gb*a.soluong << endl;
            return out;
        }
};

int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];
    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}