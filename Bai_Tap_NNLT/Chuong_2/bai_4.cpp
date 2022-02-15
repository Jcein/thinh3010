/*Viết một chương trình tính toán lượng mưa trung bình trong 3 tháng. Chương trình
yêu cầu người dùng nhập vào tên của mỗi tháng, như là June, July; và lượng mưa
(đơn vị đo là inches) của mỗi tháng. Sau đó chương trình hiển thị ra thông báo tương
tự như sau:
“Lượng mưa trung bình của tháng June, July, và August là 6.72 inches.”.
*/
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
    float a,b,c;
    string fisrtMonth,secondMonth,thirdMonth;
    cout<<"Nhap 3 thang ke tiep nhau:"<<endl;
    cin>>fisrtMonth>>secondMonth>>thirdMonth;
    cout<<"Nhap luong mua cua thang "<<fisrtMonth<<" : ";
    cin>>a;
    cout<<"Nhap luong mua cua thang "<<secondMonth<<" : ";
    cin>>b;
    cout<<"Nhap luong mua cua thang "<<thirdMonth<<" : ";
    cin>>c;
    cout<<setprecision(2)<<fixed<<"Luong mua trung binh cua thang "<<fisrtMonth<<", "<<secondMonth<<", va "<<thirdMonth<<" la "<<(a+b+c)/3<<" inches.";
    return 0;
}
