#include <iostream>
//#include <math.h>
using namespace std;

int main(){
    int n;cin>>n;
    int place1,place2;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    place1=0;place2=0;
    int max=0,min=9999;
    for (int i = 0; i < n; i++)
    {
        if(a[i]>max){max=a[i];place1=i;}
        if(a[i]<min){min=a[i];place2=i;}
    }
    
    cout<<place1+1<<" "<<place2+1;
    return 0;
}