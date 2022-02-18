#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int money =2500;
    for (int i = 0; i < 6; i++)
    {
        money+=(2500*0.04);
    }
    cout<<money;
    return 0;
}
