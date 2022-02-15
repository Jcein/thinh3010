/*Công ty Yukon Widget sản xuất các vật dụng nặng 12,5 pound mỗi vật. Viết chương
trình tính toán có bao nhiêu vật dụng được xếp trên một tấm bảng pallet, dựa trên
tổng trọng lượng của pallet. Chương trình sẽ hỏi người dùng xem pallet nặng bao
nhiêu và trọng lượng của pallet với các vật dụng được xếp chồng lên nhau. Sau đó,
nó sẽ tính toán và hiển thị số lượng vật dụng được xếp chồng lên nhau trên pallet.*/
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double total,pallet;
    cout<<"Khoi luong pallet: ";
    cin>>pallet;
    cout<<"Tong khoi luong pallet va cac vat nang: ";
    cin>>total;
    double check=(total-pallet)/12.5;
    if (check>(int)check){cout<<"So luong vat dung: "<<(int)check<<" va co "<<check-(int)check<<" pound khong xac dinh";}
    else{cout<<"So luong vat dung: "<<check;} 
    
    
    return 0;
}
