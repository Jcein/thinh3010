#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float level=0;
    for (int i = 1; i < 26; i++)
    {
            level+=1.5;
            cout<<"Muc nuoc tang len trong "<<i<<" nam: ";
            cout<<level<<" mm"<<endl;
        
    }
    
    return 0;
}
