/*Công thức làm bánh với các thành phần như sau:
 1.5 cốc đường
 1 cốc bơ
 2.75 cốc bột
Với các phần như trên cho ra 48 chiếc bánh. Bạn hãy viết một chương trình yêu cầu
người dùng nhập số lượng chiếc bánh mà họ muốn làm, sau đó hiển thị ra tỉ lệ của
các thành phần theo công thức trên để đủ làm được số chiếc bánh mà họ muốn*/
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
    int a;
    cout<<"So luong banh ma ban muon: ";
    cin>>a;
    cout<<"Neu ban muon lam "<<a<<" cai banh, ban can chuan bi: "<<endl;
    cout<< setprecision(3)<<fixed<<(a/48.0)*1.5<<" coc duong"<<endl;
    cout<< setprecision(3)<<fixed<<(a/48.0)*1<<" coc bo"<<endl;
    cout<< setprecision(3)<<fixed<<(a/48.0)*2.75 <<" coc bot"<<endl;
    return 0;
}
