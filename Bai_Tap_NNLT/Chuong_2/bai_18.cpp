/*Giả sử không có khoản tiền gửi nào ngoài khoản đầu tư ban đầu, số dư trong tài
khoản tiết kiệm sau một năm có thể được tính theo công thức
Trong đó, Principal là số dư trong tài khoản tiết kiệm, Rate là lãi suất, và T là số lần
tính lãi gộp trong một năm (T là 4 nếu lãi gộp hàng quý).
Viết một chương trình yêu cầu tiền gốc, lãi suất và số lần lãi gộp. Nó sẽ hiển thị một
báo cáo tương tự như:*/
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
    double tienGoc,tax,n;
    cout<<"So tien goc: ";
    cin>>tienGoc;
    cout<<"Lai suat (%): ";
    cin>>tax;
    cout<<"So lan lai gop: ";
    cin>>n;
    cout<<endl<<"------------------------------"<<endl;
    cout<<"Interest rate: "<<setw(9)<<tax<<" %"<<endl;
    cout<<"Times compounded: "<<setw(4)<<n<<endl;
    cout<<setprecision(2)<<fixed<<"Principal: "<<setw(10)<<"$"<<tienGoc<<endl;
    cout<<setprecision(2)<<fixed<<"Interest: "<<setw(11)<<"$"<<tienGoc*pow((1+((tax/100)/n)),n)-tienGoc<<endl;
    cout<<setprecision(2)<<fixed<<"Amount in Savings:"<<setw(3)<<"$"<<tienGoc*pow((1+((tax/100)/n)),n);
    
    return 0;
}
