#include <iostream>
//#include <math.h>
using namespace std;

int main(){
    int k,layer;
    cin>>k;
    layer=0;
    int i=0;
    while (layer<=k){
        i+=1;
        layer=(i*(i+1))/2;
    }
    cout<<i-1;
    return 0;
}