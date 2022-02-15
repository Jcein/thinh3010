/*Viết một chương trình chuyển đổi giá trị giữa hai đơn vị đo nhiệt độ là Celsius và
Fahrenheit. Với công thức chuyển đổi là
Trong đó F là nhiệt độ trong đơn vị Fahrenheit, và C là nhiệt độ trong đơn vị Celsius.*/
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float check,nhietdo;
    cout<<"Ban muon chuyen doi nhu nao:  "<<endl;
    cout<<"F --> C (1)"<<endl;
    cout<<"C --> F (2)"<<endl;
    cout<<" Nhap '1' de chon cach chuyen (1), nhap '2' de chon cach chuyen (2)"<<endl;
    cin>>check;
    cout<<"Nhap nhiet do: ";
    cin>>nhietdo;
    if (check==1){cout<< nhietdo<<" F la : "<<((9/5.0)*nhietdo)+32<<" C";}
    else {cout<< nhietdo<<" C la : "<<((nhietdo-32)*5.0)/9<<" F";}
    
    return 0;
}
