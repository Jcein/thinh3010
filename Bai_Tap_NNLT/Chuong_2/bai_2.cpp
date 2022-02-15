/*Có 3 loại ghế ngồi trên một sân vận động. Với một môn bóng, các ghế hạng A vó
giá 15 đô la, các ghế hạng B có giá 12 đô la, và các ghế hạng C có giá là 9 đô la.
Viết chương trình yêu cầu người dùng nhập số lượng vé cho mỗi hạng ghế và hiển
thị tổng số tiền thu được từ các vé được bán ra. Hãy định dạng số tiền ở dạng kí hiệu
fixed-point, với độ chính xác 2 số thập phân đằng sau dấu phẩy, và luôn hiển thị dấu
phẩy thập phân trong mọi trường hợp.
*/
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
    double a,b,c,sum;
    cout<<"Nhap so luong ve cho ghe hang A: ";
    cin>> a;
    cout<<"Nhap so luong ve cho ghe hang A: ";
    cin>> b;
    cout<<"Nhap so luong ve cho ghe hang A: ";
    cin>> c;
    cout<< setprecision(2)<<fixed<<"Tong so tien thu duoc: "<< a*15+b*12+c*9<<" $";
    return 0;
}
