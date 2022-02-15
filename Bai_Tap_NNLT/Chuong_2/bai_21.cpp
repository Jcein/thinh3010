/*Chỉnh sửa chương trình bạn đã viết trong Programming Challenge 20 (Pizza Pi) để
báo cáo số lượng pizza bạn cần mua cho một bữa tiệc nếu mỗi người tham dự có khả
năng sẽ ăn khoảng 4 miếng cắt. Chương trình cần yêu cầu người dùng nhập vào số
lượng người tham dự bữa tiệc, và đường kích loại pizza sẽ được gọi mua. Sau đó
tính toán và hiển thị số lượng pizza cần mua lên màn hình. */
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
    const float PI=3.14;
    double n;int soNguoi;
    cout<<"So luong nguoi tham du: ";
    cin>>soNguoi;
    cout<<"Nhap duong kinh banh : ";
    cin>>n;
   
    cout<<"So luong pizza can dung :"<<(int)((soNguoi*4)/((pow(n/2,2)*PI)/14.125))+1<<" cai pizza";
    return 0;
}

