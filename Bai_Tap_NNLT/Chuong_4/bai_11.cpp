#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int time;
    float percent ,quantity;
    cout<<"Nhap so luong sinh vat ban dau: ";
    do{cin>>quantity;}
    while(quantity<2);
    cout<<"Muc tang trung binh hang ngay (%): ";
    do{cin>>percent;}
    while(percent<0);
    cout<<"Nhap so ngay: ";
    do{cin>>time;}
    while(time<1);
    for (int i = 0; i < time; i++)
    {
        quantity+=((quantity*percent)/100.0);
        cout<<"So luong sinh vat ngay thu "<<i+1<<" : "<<(int)quantity<<endl;
    }
    
    return 0;
}
