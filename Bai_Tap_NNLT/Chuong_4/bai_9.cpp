#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int perRoom,floor,totalRoom=0,perUsedRoom,totalUsedRoom=0;
    float percent;
    cout<<"Nhap so luong tang: ";
    do{
    cin>>floor;        
    }while(floor<1);
    if (floor>13){floor=13;}

    for (int i = 0; i < floor; i++)
    {
        cout<<"Nhap so phong cua tang "<<i+1<<" : ";
        do{cin>>perRoom;}
        while(perRoom<10);
        totalRoom+=perRoom;
        cout<<"Nhap so phong da su dung cua tang "<<i+1<<" : ";
        do{cin>>perUsedRoom;}
        while(perUsedRoom<0||perUsedRoom>perRoom);
        totalUsedRoom+=perUsedRoom;
    }
    cout<<"Khach san co: "<<totalRoom<<" phong"<<endl;
    cout<<"Co: "<<totalUsedRoom<<" phong da su dung"<<endl;
    cout<<"Co: "<<totalRoom-totalUsedRoom<<" phong trong"<<endl;
    cout<<"Ty le phong co nguoi: "<<((float)totalUsedRoom/totalRoom)*100<<" %";

    return 0;
}
