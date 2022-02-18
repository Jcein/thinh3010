#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){
    int a,b,selection;
    srand(time(0));
    a=rand() %101;
    b=rand() %101;
    cout<<a<<" va "<<b<<endl;
    while(1){
        cout<<"Thuc hien phep cong [+] (1)"<<endl;
        cout<<"Thuc hien phep tru  [-] (2)"<<endl;
        cout<<"Thuc hien phep nhan [x] (3)"<<endl;
        cout<<"Thuc hien phep chia [:] (4)"<<endl;
        cout<<"Quit                    (5)"<<endl;
        cout<<"Chon chuc nang (1,2,3,4,5): ";
        cin>>selection;
        if((selection>5)||(selection<1)){cout<<"error, vui long nhap lai"<<endl;}
        if (selection==5){return 100;}
        if (selection==1){cout<<"Tong:"<<a+b<<endl;}
        if (selection==2){cout<<"Hieu:"<<a-b<<endl;}
        if (selection==3){cout<<"Tich:"<<a*b<<endl;}
        if (selection==4){cout<<"Thuong:"<<(float)a/b<<endl;}
    }    
    return 0;
}