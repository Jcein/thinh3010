/*Một chủ vườn nho đang trồng một số hàng nho mới và cần biết có bao nhiêu cây
nho để trồng trong mỗi hàng. Cô ấy đã xác định rằng sau khi đo chiều dài của một
hàng trong tương lai, cô ấy có thể sử dụng công thức sau để tính số lượng dây leo sẽ
phù hợp với hàng đó, cùng với các cụm cuối của giàn sẽ cần được xây dựng ở mỗi
đầu của hàng:
Các thuật ngữ trong công thức là:
 V là số nho sẽ phù hợp trong hàng.
 R là chiều dài của hàng, tính bằng feet.
 E là khoảng trống, tính bằng feet, được sử dụng bởi một cụm cuối trụ.
 S là khoảng cách giữa các dây leo, tính bằng feet.
Viết chương trình thực hiện phép tính cho chủ vườn nho. Chương trình sẽ yêu cầu
người dùng nhập các thông tin sau:
 Chiều dài của hàng, tính bằng feet
 Khoảng không gian được sử dụng bởi một cụm cuối bài, tính bằng feet
 Khoảng cách giữa các dây leo, tính bằng feet
 Sau khi dữ liệu đầu vào đã được nhập, chương trình sẽ tính toán và hiển thị số
lượng nho sẽ phù hợp trong hàng.
*/
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double r,e,s,v;
    cout<<"Chieu dai cua hang: ";
    cin>>r;
    cout<<"Khoang khong gian duoc su dung baoi mot cum cuoi tru: ";
    cin>>e;
    cout<<"Khoang cach giua cac day leo: ";
    cin>>s;
    v=(r-2*e)/s;
    cout<<endl;
    cout<<"So luong nho phu hop trong hang: "<<v;
    
    return 0;
}
