#include <iostream>
//#include <math.h>
using namespace std;

int main(){
    int total,quantity,price;
    cin>>total>>quantity>>price;
    if (total-(quantity*price)>=0){cout<<"yes";}
    else {cout<<"no "<<(quantity*price)-total;}
 
    return 0;
}