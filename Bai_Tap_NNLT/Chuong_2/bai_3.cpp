/*Viết một chương yêu cầu nhập điểm của 5 bài kiểm tra. Chương trình thực hiện tính
toán giá trị trung bình của 5 bài kiểm tra này sau đó hiển thị lên màn hình. Số được
hiển thị phải được định dạng theo kí hiệu fixed-point, với độ chính xác là 1 đằng sau
dấu phẩy*/
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
    float a,b,c,d,e;
    cout<<"nhap diem cua 5 bai kiem tra : "<<endl;
    cin>>a>>b>>c>>d>>e;
    cout<<setprecision(1)<<fixed<<"Diem trung binh: "<<(a+b+c+d+e)/5;
    
    return 0;
}
