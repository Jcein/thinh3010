#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int x,max=0,min=99999;
    bool check=false;
    cout<<"Nhap day so ket thuc bang cach dien -99:"<<endl;
    while(1){
        cin>>x;
        if(x==-99&&check==false){cout<<"Vui long nhap day so: "<<endl;continue;}
        if(x==-99){cout<<"gia tri max: "<<max<<endl<<"gia tri min: "<<min;return 100;}
        if (x>max){max=x;}
        if (x<min){min=x;}
        check=true;
    }       
    return 0;
}
