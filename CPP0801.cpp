/*                      SAO CHÉP TỆP TIN
Cho tệp dữ liệu đầu vào có tên: PTIT.in đặt cùng thư mục với tệp mã nguồn.
Nhiệm vụ của bạn là sao chép nội trong tệp PTIT.in tới tệp PTIT.out
*/

#include <iostream>
#include <string>
#include <fstream>  

using namespace std;

int main(){
    ifstream fileIn("PTIT.in");
    ofstream fileOut("PTIT.out");
    while(!fileIn.eof()){
        string s;
        getline(fileIn,s);    
        fileOut << s << endl;
    }
    fileIn.close();
    fileOut.close();
}