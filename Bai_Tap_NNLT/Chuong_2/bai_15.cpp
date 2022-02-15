/*Một quận thu thuế bất động sản trên giá trị đánh giá của tài sản, bằng 60 phần trăm
giá trị thực của tài sản. Nếu một mẫu đất được định giá là 10.000 đô la, thì giá trị
đánh giá của nó là 6.000 đô la. Thuế tài sản sau đó là 75 ¢ cho mỗi $ 100 của giá trị
đánh giá. Thuế cho diện tích được đánh giá là $ 6.000 sẽ là $ 45. Viết chương trình
yêu cầu nhập giá trị thực của một phần tài sản, sau đó hiển thị giá trị đánh giá và
thuế tài sản.
(1 đô la = 100 cent)*/

#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
    double money;
    cout<<"nhap gia tri thuc cua tai san: ";
    cin>>money;
    cout<<"----------"<<endl;
    cout<<setprecision(2)<<fixed<<"gia tri danh gia: "<<money*0.6<<" $"<<endl;
    cout<<setprecision(2)<<fixed<<"thue tai san : "<<(((money*0.6)/100)*75)/100<<" $";
    
    return 0;
}
