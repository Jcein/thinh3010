#include <iostream>
//#include <math.h>
using namespace std;

int main(){
    int a,b,c,min;
    cin>>a>>b>>c;
    min=0;
    if (a+b<c){min=c-(a+b-1);}
    else if(a+c<b){min=b-(a+c-1);}
    else if(c+b<a){min=a-(c+b-1);}

    cout<<min;
    return 0;
}