#include <iostream>
#include <math.h>
using namespace std;

int main(){
    for (int i = 0; i < 128; i++)
    {
        cout<<(char)i<<" ";
        if (i%16==0 && i!=0){cout<<endl;}
    }
    
    return 0;
}
