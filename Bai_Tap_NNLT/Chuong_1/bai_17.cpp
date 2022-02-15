/*17. Hoa hồng chứng khoán
Kathryn đã mua 750 cổ phiếu với giá 35.00 USD / cổ phiếu. Cô ấy phải trả cho người
môi giới chứng khoán của mình khoản hoa hồng 2% cho giao dịch. Viết một chương
trình tính toán và hiển thị như sau:
 Số tiền thanh toán cho cổ phiếu (không có hoa hồng).
 Số tiền hoa hồng.
 Tổng số tiền đã thanh toán (tổng cho cổ phiếu cộng với tiền hoa hồng) */
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double a=((35.00*750)/100)*2;
    cout<<"So tien thanh toan cho co phieu : "<<35.00*750<<" USD"<<endl;   
    cout<<"So tien hoa hong : "<< a<<" USD"<<endl;
    cout<<"Tong so tien phai thanh toan : "<< 35.00*750+ a<<" USD";  
    
    return 0;
}
