#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
    float speed,time,distance;
    cout<<"Toc do cua xe: ";
    cin>>speed;cout<<endl;
    cout<<"Xe di duoc trong bao nhieu gio: ";
    cin>>time;
    cout<<"Khoang cach theo gio ma xe da di: "<<endl;

    for (int i = 1; i <= time; i++)
    {
        cout<<i<<setw(5)<<speed*i<<endl;
    }
    
    return 0;
}
