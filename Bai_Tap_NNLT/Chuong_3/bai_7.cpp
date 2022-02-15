#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
    int time;
    cout<<"Nhap so giay(s): ";cin>>time;
    
    if (time/86400!=0){
        cout<<time/86400<<" ngay, ";
        time=time%86400;
    }
    if (time/3600!=0){
        cout<<time/3600<<" gio, ";
        time=time%3600;
    }
    if (time/60!=0){
        cout<<time/60<<" phut, ";
        time=time%60;
    }
    if (time!=0){
        cout<<time<<" giay, ";
    }

    
    return 0;
}
