#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
    int month,year;
    cout<<"Nhap thang va nam theo thu tu: ";
    cin>>month>>year;
    if ((year%400==0)||(year%4==0 && year%100!=0)){
        switch (month)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        {
            cout<<"31 ngay";
            break;
        }
        case 4:
        case 6:
        case 9:
        case 11:
        
        {
            cout<<"30 ngay";
            break;
        }
        default:
        {
            cout<<"29 ngay";
            break;
        }
    }
    }
    else {
        switch (month)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        {
            cout<<"31 ngay";
            break;
        }
        case 4:
        case 6:
        case 9:
        case 11:
        
        {
            cout<<"30 ngay";
            break;
        }
        default:
        {
            cout<<"28 ngay";
            break;
        }
    }
    }
    return 0;
}
