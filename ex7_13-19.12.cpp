#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int a,n=0,binary=0;
    cin>>a; 

    while (a!=0){
        binary=binary+(a%2)*(pow(10,n));
        a=a/2;n+=1;
    }
    cout<<binary;
    return 0;
}