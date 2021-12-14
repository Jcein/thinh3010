#include <iostream>
//#include <math.h>
using namespace std;

int main(){
    //chuyen len chu hoa
    string a;
    cin>>a;

    for (int i=0;i<a.length();i++){
        if (a[i]>=97&&a[i]<=122){a[i]-=32;}
    }
    cout<<a;
    
    /* chuyen ve chu thuong 
    string a;
    cin>>a;

    for (int i=0;i<a.length();i++){
        if (a[i]>=65&&a[i]<=90){a[i]+=32;}
    }
    cout<<a;
    */
    return 0;
}