#include <iostream>
//#include <math.h>
using namespace std;

int main(){
    int width,heigh;
    cin>>width>>heigh;

    for (int i=0;i<width;i++){
        cout<<"*  ";
    }
    cout<<endl;
    for(int i=0;i<heigh-2;i++){
        for (int i = 0; i < width; i++){
            if (i==0||i==width-1){cout<<"*  ";}
            else {cout<<"   ";}
        }
        cout<<endl;
    }
    for (int i=0;i<width;i++){
        cout<<"*  ";
    }
    return 0;
}