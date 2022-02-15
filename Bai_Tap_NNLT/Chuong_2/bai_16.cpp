/*Quận Madison cung cấp một khoản miễn thuế chủ nhà $ 5,000 cho những người cao
tuổi của nó. Ví dụ: nếu ngôi nhà của một người cao tuổi được định giá là 158.000
đô la, giá trị được đánh giá của nó sẽ là 94.800 đô la, như đã giải thích ở trên. Tuy
nhiên, anh ta sẽ chỉ trả thuế trên 89.800 đô la. Với mức thuế năm ngoái là 2,64 đô la
cho mỗi 100 đô la giá trị được đánh giá, thuế tài sản sẽ là 2.370,72 đô la. Ngoài việc
giảm thuế, công dân cao tuổi được phép trả thuế tài sản của họ thành bốn lần như
nhau. Khoản thanh toán hàng quý đến hạn cho tài sản này sẽ là $ 592,68. Viết một 
Trang | 5
chương trình yêu cầu người dùng nhập giá trị thực của một phần tài sản và thuế suất
hiện hành cho mỗi $ 100 giá trị được đánh giá. Sau đó, chương trình sẽ tính toán và
báo cáo mức thuế bất động sản hàng năm mà một chủ nhà cao cấp sẽ phải trả cho
bất động sản này và hóa đơn thuế hàng quý sẽ là bao nhiêu.
*/
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
    double money,tax,total;
    cout<<"nhap gia tri thuc cua tai san: ";
    cin>>money;
    cout<<"thue suat hien hanh cho moi 100$ nam nay: ";
    cin>>tax;
    cout<<"----------"<<endl;
    total=(((money*0.6)-5000)/100)*tax;
    cout<<setprecision(2)<<fixed<<"thue bat dong san hang nam: "<<total <<" $"<<endl;
    cout<<setprecision(2)<<fixed<<"thue hang quy: "<<total/4<<" $";
    
    return 0;
}

