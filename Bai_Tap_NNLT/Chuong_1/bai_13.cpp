/*Một công ty điện tử bán một bo mạch với lợi nhuận là 35 phần trăm. Viết chương
trình tính toán giá bán của một bo mạch có chi phí là 14.95 đô la. Hiện kết quả lên
màn hình. */
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
    cout<<setprecision(2)  <<fixed<<"Gia ban bo mach: "<<14.95+((14.95/100)*35)<<" $";
    
    return 0;
}
