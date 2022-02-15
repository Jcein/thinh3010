/*Viết một chương trình tính tổng thuế bán hàng trên một giỏ hàng 95 đô. Giả sử thuế bán
hàng của một tiểu bang là 4 phần trăm, và thuế bán hàng của quận là 2 phần trăm*/
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    cout<<(95/100.0)*4+(95/100.0)*2 << " $";
    return 0;
}