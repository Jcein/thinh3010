#include <iostream>
#include <math.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    int a,b,result;
    srand(time(NULL));
    a=rand();
    b=rand();

    if (a>b){
        cout<<" "<<a<<endl;
         cout<<"+"<<b<<endl;
    }
    else{
        cout<<" "<<b<<endl;
        cout<<"+"<<a<<endl;
    }
    cout<<"-------"<<endl;
    cout<<"?"<<endl;
    cout<<"Nhap ket qua: ";
    cin>>result;
    if (result==a+b){
        cout<<"Chuc mung";
    }
    else{cout<<"Ket qua khong chinh xac"<<endl<<"Ket qua la: "<<a+b;}
    return 0;
}
