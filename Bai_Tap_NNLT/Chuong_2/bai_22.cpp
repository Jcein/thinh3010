/*Viết một chương trình yêu cầu người dùng nhập vào một góc, đơn vị đo radians.
Chương trình sẽ hiển thị các giá trị sine, cosine, và tangent của góc đó. (Sử dụng
hàm sin, cos, và tan trong thư viện có sẵn để xác định các giá trị này.) Output sẽ hiện
thị các số dạng kí hiệu fixed-point, làm tròn đến 4 chữ số đằng sau dấu phẩy*/
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
    int n;
    cout<<"nhap goc: ";
    cin>>n;
    cout<<setprecision(4)<<fixed<<"sin("<<n<<")="<<sin(n)<<endl;
    cout<<setprecision(4)<<fixed<<"cos("<<n<<")="<<cos(n)<<endl;
    cout<<setprecision(4)<<fixed<<"tan("<<n<<")="<<tan(n)<<endl;
    return 0;
}
