#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int date,month,year;
    cout<<"Nhap ngay thang nam theo thu tu (chi nhap 2 chu so cuoi cua nam): ";
    cin>>date>>month>>year;
    if (date*month==year){
        cout<<"Ngay phep thuat";
    }
    else {cout<<"Khong phai ngay phep thuat";}
    return 0;
}
