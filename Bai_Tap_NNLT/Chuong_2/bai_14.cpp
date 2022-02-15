/*Một công ty bán lẻ phải nộp một báo cáo thuế bán hàng hàng tháng liệt kê doanh thu
trong tháng và số thuế bán hàng đã thu được. Viết một chương trình yêu cầu nhập
tháng, năm và tổng số tiền thu được tại máy tính tiền (tức là doanh thu cộng với thuế
Trang | 4
bán hàng). Giả sử thuế bán hàng của tiểu bang là 4 phần trăm, và thuế bán hàng của
quận là 2 phần trăm.
Nếu biết tổng số tiền thu được và tổng số thuế bán hàng là 6 phần trăm, thì số tiền
bán sản phẩm có thể được tính như sau:
Trong đó, S là doanh thu bán sản phẩm, và T là tổng thu nhập (doanh thu bán sản
phẩm cộng với thuế bán hàng).
Một báo cáo của chương trình có thể tương tự như dưới đây:*/
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
    string month;
    int year;
    double total;
    cout<<"nhap thang: ";cin>>month;
    cout<<"nhap nam: ";cin>>year;
    cout<<"Tong so tien thu : ";cin>>total;
    cout<<endl;
    cout<<month<<" "<<year<<endl;
    cout<<"-----------------------------"<<endl;
    cout<< setprecision(2)<<fixed<<"Tong thu nhap:"<< setw(6)<<"$"<<setw(3)<<""<<total<<endl;
    cout<< setprecision(2)<<fixed<<"Doanh thu:"<< setw(10)<<"$"<<setw(3)<<""<<total/1.06<<endl;
    cout<< setprecision(2)<<fixed<<"Tong quan:"<< setw(10)<<"$"<<setw(4)<<""<<(total/1.06)*0.02<<endl;
    cout<< setprecision(2)<<fixed<<"Thue tieu bang:"<< setw(5)<<"$"<<setw(4)<<""<<(total/1.06)*0.04<<endl;
    cout<< setprecision(2)<<fixed<<"Tong thue:"<< setw(10)<<"$"<<setw(4)<<""<<(total/1.06)*0.06<<endl;
    return 0;
}
