#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n,sum=0;
    cout<<"Nhap so nguyen duong n: ";
    do{
        cin>>n;
    }
    while(n<0);
    for (int i = 1; i < n+1; i++)
    {
        sum+=i;
    }
    cout<<sum;        
    return 0;
}
