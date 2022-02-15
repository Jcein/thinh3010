/*Viết một chương trình có thể sử dụng như một gia sư về toán cho các bạn nhỏ.
Chương trình sẽ hiển thị hai số ngẫu nhiên để thực hiện phép cộng, ví dụ:
Sau đó chương trình sẽ dừng lại trong khi học sinh thực hiện việc tính toán. Khi học
sinh đã sẵn sàng để kiểm tra đáp án, họ có thể nhấn một phím bất kỳ để chương trình
hiển thị kết quả chính xác.*/
#include <iostream>
#include <math.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    int a,b;
    srand(time(NULL));
    a=rand();
    b=rand();

    if (a>b){
        cout<<" "<<a<<endl;
         cout<<"+"<<b<<endl;
    }
    else{
        cout<<" "<<b<<endl;
        cout<<"+"<<a<<endl;
    }
    cout<<"-------"<<endl;
    cout<<"?"<<endl;
    system("pause");
    if (a>b){
        cout<<" "<<a<<endl;
         cout<<"+"<<b<<endl;
    }
    else{
        cout<<" "<<b<<endl;
        cout<<"+"<<a<<endl;
    }
    cout<<"---------"<<endl;
    cout<<" "<<a+b;
    
    return 0;
}
