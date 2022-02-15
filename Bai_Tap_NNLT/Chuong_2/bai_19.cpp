/*Khoản thanh toán hàng tháng cho một khoản vay có thể được tính theo công thức
sau:
Trong đó, Rate là lãi suất hàng tháng, được tính bằng lãi suất hàng năm chia cho 12.
(12% lãi suất hàng năm sẽ là 1% lãi suất hàng tháng.) N là số lần thanh toán và L là
số tiền của khoản vay.
Hãy viết một chương trình yêu cầu nhập vào các giá trị này và hiển thị báo cáo dưới
dạng tương tự như sau:*/
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
    double money,tax,n,payment;
    cout<<"So tien khoan vay : ";
    cin>>money;
    cout<<"Lai suat hang thang (%): ";
    cin>>tax;
    cout<<"So lan thanh toan: ";
    cin>>n;
    payment=money*(((tax/100)*pow(1+(tax/100),n))/(pow(1+(tax/100),n)-1));
    cout<<endl<<"-------------------"<<endl;
    cout<<setprecision(2)<<fixed<<"Loan Amount: "<<setw(13)<<"$" <<money<<endl;
    cout<<setprecision(2)<<fixed<<"Monthly Interest Rate: "<<setw(6)<<tax<<"%"<<endl;
    cout<<setprecision(2)<<fixed<<"Number of Payments: "<<setw(10)<<n<<endl;
    cout<<setprecision(2)<<fixed<<"Monthly payment: "<<setw(9)<<"$" <<payment<<endl;
    cout<<setprecision(2)<<fixed<<"AMount Paid Back: "<<setw(8)<<"$" <<payment*n<<endl;
    cout<<setprecision(2)<<fixed<<"Internet Paid: "<<setw(11)<<"$" <<payment*n-money;
    return 0;
}
