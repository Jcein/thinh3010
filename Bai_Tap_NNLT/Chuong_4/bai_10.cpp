#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int year;
    float month=0,perMonth;
    cout<<"Nhap so nam: ";
    do {cin>>year;}
    while (year<1);
    for (int i = 0; i < year; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cout<<"Nhap luong mua thang "<<j+1<<" nam "<<i+1<<" : ";
            do {cin>>perMonth;}
            while(perMonth<0);
            month+=perMonth;
        }
        
    }
    cout<<"So thang: "<<year*12<<endl;
    cout<<"Tong luong mua: "<<month<<endl;
    cout<<"Luong mua trung binh thang: "<<month/(year*12);
    return 0;
}
