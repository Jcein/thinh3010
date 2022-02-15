/*Một khách hàng trong một cửa hàng mua 5 món đồ. Giá của các món đồ như sau:
 Giá của món đồ thứ nhất = 15.59 đô la
 Giá của món đồ thứ hai = 24.59 đô la
 Giá của món đồ thứ ba = 6.59 đô la
 Giá của món đồ thứ tư = 12.59 đô la
 Giá của món đồ thứ năm = 3.59 đô la
Viết một chương trình lưu giữ giá của năm món đồ này trong năm biến. Hiển thị giá
của mỗi món đồ, tổng tạm tính của giỏ hàng, số tiền thuế, và tổng phải trả. Giả sử
thuế bán hàng là 7 phần trăm */
#include <iostream>
#include <math.h>
using namespace std;

int main(){
        float item1=15.59,item2=24.59,item3=6.59,item4=12.59,item5=3.59;
        float sum=item1+item2+item3+item4+item5;
        cout<<"Gia mon do thu 1 = "<<item1<<" $"<<endl;
        cout<<"Gia mon do thu 2 = "<<item2 <<" $"<<endl;
        cout<<"Gia mon do thu 3 = "<<item3 <<" $"<<endl;
        cout<<"Gia mon do thu 4 = "<<item4 <<" $"<<endl;
        cout<<"Gia mon do thu 5 = "<<item5 <<" $"<<endl;
        cout<<endl;
        cout<<"Tong tam tinh = "<<sum<<" $"<<endl;
        cout<<"So tien thue = "<<(sum/100)*7<<" $"<<endl;
        cout<<"Tong phai tra = "<<sum +((sum/100)*7)<<" $";
    return 0;
}
