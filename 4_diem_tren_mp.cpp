#include<iostream>
#include <algorithm>
#include <string>
#include <map>
#include <set>

#define For(i,a,b) for(int i=a; i<b; i++)
#define testcases() int t; cin >> t; while(t--)

using namespace std;

struct Toado{
    int x,y,z;

    void Input(){
        cin >> x >> y >> z;
    }
};

Toado ToadoVecto(Toado a, Toado b, Toado &ab){
    ab.x = b.x-a.x;
    ab.y = b.y-a.y;
    ab.z = b.z-a.z;
    return ab;
}

Toado Tichvh(Toado a, Toado b){
    Toado ans;
    ans.x = a.y*b.z - a.z*b.y;
    ans.y = a.z*b.x - a.x*b.z;
    ans.z = a.x*b.y - a.y*b.x;
    return ans;
}

void Solve(Toado ab, Toado ac, Toado ad){
    Toado tvh = Tichvh(ab,ac);
    int sum = tvh.x*ad.x + tvh.y*ad.y + tvh.z*ad.z;
    if(sum) cout << "NO" << endl;
    else cout << "YES" << endl;
}

int main(){
    testcases(){
        Toado a,b,c,d;
        a.Input(); b.Input(); c.Input(); d.Input();
        Toado ab,ac,ad;
        ab = ToadoVecto(a,b,ab);
        ac = ToadoVecto(a,c,ac);
        ad = ToadoVecto(a,d,ad);
        Solve(ab,ac,ad);
    }
}