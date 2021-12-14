#include <iostream>
//#include <math.h>
using namespace std;

int main(){
    int n,a,b,min=-1;
    cin>>n;
    do{cin>>a>>b;} while (b<a);
    
    
    int len_b=n/b;
    for (int i=len_b;i>=0;i--){
        if((n-i*b)%a==0){min=i+((n-i*b)/a);break;}
    }
    cout<<min;
    

    return 0;
}