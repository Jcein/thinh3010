/*Viết chương trình tính toán mức tiêu thụ xăng của ô tô. Chương trình này sẽ yêu cầu
người dùng nhập số gallon xăng xe có thể chứa, và nhập số dặm nó có thể đi được khi
được đổ đầy xăng. Sau đó nó sẽ hiển thịsố dặm có thể được lái đi trên mỗi gallon xăng.*/
#include <iostream>
#include <math.h>
using namespace std;

int main(){
       float gallonQuantity, max;
       cout<<"nhap so gallon"<<endl;
       cin>> gallonQuantity;
       cout<<"nhap so dam co the di"<<endl;
       cin>>max;
       cout<<"Quang duong xe di duoc tren moi gallon: "<< max/gallonQuantity<< " dam";    
    return 0;
}