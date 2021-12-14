#include <iostream>
//#include <math.h>
using namespace std;

int main(){
    int n,c;cin >>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }

    for (int i=0;i<n-1;i++){
        int min=i;
        for (int j=i+1;j<n;j++){
            if (a[j]<a[min]){min=j;}
        }
        c=a[i];a[i]=a[min];a[min]=c;
    }
    for (int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    
    return 0;
}