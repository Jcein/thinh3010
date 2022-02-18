#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    string name,first,last;
    cout<<"Nhap so luong hoc sinh cua lop: ";
    do{cin>>n;}
    while(n<1&&n>25);
    for (int i = 0; i < n; i++)
    {   
        cout<<"Ten hoc sinh thu "<<i+1<<" la: ";
        cin>> name;
        if (i==0){first=name;}
        if (i==n-1){last=name;}
    }
    cout<<endl<<"Hoc sinh dau hang la: "<<first<<endl;
    cout<<"Hoc sinh cuoi hang la: "<<last;        
    return 0;
}
