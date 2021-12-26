#include<iostream>
#include<iomanip>
using namespace std;
int check=0;
struct NhanVien{
	string name;
	string gender;
	string birth;
	string address;
	string taxcode;
	string date;
};
void nhap(NhanVien &a){
	if(check==0) {
		cin.ignore();
		check=1;
	}
	getline(cin,a.name);
	getline(cin,a.gender);
	getline(cin,a.birth);
	getline(cin,a.address);
	getline(cin,a.taxcode);
	getline(cin,a.date);
}
void inds(NhanVien a[],int n){
	for(int x=0;x<n;x++){
			cout<<setfill('0')<<setw(5)<<x+1<<" ";
			cout<<a[x].name<<" "<<a[x].gender<<" ";
			cout<<a[x].birth<<" ";
		    cout<<a[x].address<<" "<<a[x].taxcode<<" ";
		   	cout<<a[x].date;
		    cout<<endl;
		
	}
	
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}