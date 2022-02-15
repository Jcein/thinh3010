/*Một túi bánh có 30 chiếc bánh. Thông tin về calorie trên túi ghi rằng 10 khẩu phần
trong túi và một khẩu phần tương đương với 300 calories. Viết chương trình yêu cầu
người dùng nhập số lượng bánh mà họ đã ăn, sau đó in ra thông báo tổng số calories
đã tiêu thụ.*/
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cout<<"So luong banh ban da an: ";
    cin>>n;
    cout<<"Tong so calories da tieu thu: "<<n*100<<" calories";
    
    return 0;
}
