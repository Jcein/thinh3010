#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int sum=0,perDay=1,day;
    cout<<"So ngay lam viec: ";
    do{
    cin>>day;
    }while(day<1);
    cout<<endl;
    for (int i = 0; i < day; i++)
    {
        sum+=perDay;
        perDay*=2;
        cout<<"Luong ngay thu "<<i+1<< " : "<<sum<<" xu"<<endl;
    }
    cout<<"Luong cuoi ki: "<<sum/100.0<<" $";
    return 0;
}
