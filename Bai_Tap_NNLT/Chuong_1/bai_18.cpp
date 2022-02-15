/*Một công ty nước ngọt gần đây đã khảo sát 16,500 khách hàng của mình và thấy
rằng khoảng 15% trong số những người được khảo sát mua một hoặc nhiều nước
tăng lực mỗi tuần. Trong số những khách mua nước tăng lực, có khoảng 58% trong
số họ thích nước tăng lực có vị cam. Viết chương trình hiển thị như sau:
Số lượng khác hàng gần đúng trong cuộc khảo sát mua một hoặc nhiều nước tăng
lực trong mỗi tuần.
Số lượng khách hàng gần đúng trong cuộc khảo sát thích nước tăng lực có vị cam.
 */
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    cout<<"So luong khach hang mua 1 hoac nhieu nuoc tang luc trong moi tuan : "<<(16500/100)*15<<" nguoi"<<endl;
    cout<<"So luong khach hang thich nuoc tang luc vi cam : "<<(16500/100)*58<<" nguoi";
    
    return 0;
}
