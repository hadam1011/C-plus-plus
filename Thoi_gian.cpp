#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>

using namespace std;
#define For(i,a,b) for(int i=a; i<b; i++)

struct Time{
    int hours,minute,sec;

    void Input(){
        cin >> hours >> minute >> sec;
    }

    void Output(){
        cout << hours << " " << minute << " " << sec << endl;
    }
};

bool cmp(Time a, Time b){
    if(a.hours != b.hours) return a.hours < b.hours;
    else if(a.minute != b.minute) return a.minute < b.minute;
    else return a.sec < b.sec;
}

int main(){
    int n;
    cin >> n;
    Time ds[n];
    For(i,0,n) ds[i].Input();
    sort(ds,ds+n,cmp);
    For(i,0,n) ds[i].Output();
}