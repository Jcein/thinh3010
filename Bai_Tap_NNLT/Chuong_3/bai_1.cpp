#include <iostream>
#include <math.h>
using namespace std;

int main(){
    double num1,num2,max;
    cout<<"Nhap lan luot 2 so : ";
    cin>>num1>>num2;
    num1>num2?cout<<"So lon hon: "<<num1<<endl<<"So be hon: "<<num2:cout<<"So lon hon: "<<num2<<endl<<"So be hon: "<<num1;
    return 0;
}
