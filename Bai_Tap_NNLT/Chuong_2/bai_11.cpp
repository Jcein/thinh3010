/*Viết một chương trình yêu cầu người dùng nhập chi phí hàng tháng cho các chi phí
sau đây phát sinh từ việc vận hành ô tô của họ: thanh toán khoản vay, bảo hiểm,
xăng, dầu, lốp và bảo dưỡng. Sau đó, chương trình sẽ hiển thị tổng chi phí hàng
tháng của các chi phí này và tổng chi phí hàng năm của các chi phí này.*/
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double payment,baohiem,xang,dau,lop,baoduong,total;
    cout<<"Chi phi thanh toan khoan vay hang thang: ";
    cin>> payment;
    cout<<"Chi phi bao hiem hang thang: ";
    cin>> baohiem;
    cout<<"Chi phi xang hang thang: ";
    cin>> xang;
    cout<<"Chi phi dau hang thang: ";
    cin>> dau;
    cout<<"Chi phi lop hang thang: ";
    cin>> lop;
    cout<<"Chi phi bao duong hang thang: ";
    cin>> baoduong;
    total=payment+baohiem+xang+dau+lop+baoduong;
    cout<<"Tong chi phi hang thang: "<<total<<endl;
    cout<<"TOng chi phi hang nam: "<<total*12;
    
    return 0;
}
