/*Viết một chương trình tính thuế và tip trên một hóa đơn nhà hàng cho vị khách quen
với số tiền phải trả cho bữa ăn là 88.67 đô. Thuế là 6.75 phần trăm chi phí bữa ăn.
Tiền tip là 20 phần trăm tổng tiền sau khi cộng thêm thuế. Hiển thị chi phí bữa ăn,
số tiền thuế, số tiền tip, và tổng hóa đơn ra màn hình.
*/
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    cout<<"88.67 $"<<endl;
    cout<<(88.67/100)*6.75 <<" $"<<endl;
    cout<<((88.67+ ((88.67/100)*6.75))/100)*20<< " $"<<endl;
    cout<<88.67+ ((88.67/100)*6.75)+ ((88.67+ ((88.67/100)*6.75))/100)*20<< " $"<<endl;
    return 0;
}