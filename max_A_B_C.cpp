#include <iostream>
//#include <math.h>
using namespace std;

int main(){
    int a,b,c,max;
    cin>>a>>b>>c;
    max=a;
    if (max<b){max=b;};
    if (max<c){max=c;};
    cout<<"gia tri lon nhat la : "<<max;
    return 0;
}