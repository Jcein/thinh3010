/*iết một chương trình yêu cầu người dùng nhập vào số lượng người nam và số lượng
người nữ của một lớp. Chương trình sẽ hiển thị tỉ lệ phần trăm của nam và nữ ra màn hình. 
Trang | 2
Gợi ý: Giả sử có 8 nam và 12 nữ trong một lớp. Do đó tổng sĩ số của lớp là 20. Tỉ lệ
phần trăm của nam có thể được tính bằng công thức 8 : 20 = 0.4 hoặc 40 phần trăm. Tỉ
lệ phần trăm của nữ có thể được tính bằng công thức 12 : 20 = 0.6 hoặc 60 phần trăm.*/
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
    int nam,nu;
    cout<<"nhap so luong nguoi nam cua lop : ";
    cin>>nam; 
    cout<<"nhap so luong nguoi nu cua lop : ";
    cin>>nu;
    cout<< setprecision(2)<<fixed<<"Ti le phan tram cua nam : "<<(nam*100)/(nam+nu)<<"%"<<endl;
    cout<< setprecision(2)<<fixed<<"Ti le phan tram cua nu : "<<(nu*100)/(nam+nu)<<"%";
    return 0;
}
