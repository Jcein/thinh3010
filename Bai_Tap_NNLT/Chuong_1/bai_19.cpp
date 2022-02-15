/*Nhiệt độ cao trung bình tháng 7 là 85 độ F ở New York City, 88 độ F ở Denver, và
106 độ F ở Phoenix. Viết chương trình tính toán và báo cáo nhiệt độ trung bình mới
trong tháng 7 của các thành phố nếu nhiệt độ ở mỗi thành phố tăng lên 2%. */
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    cout<<"New York city: "<<85+((85/100.0)*2)<<" F"<<endl;
    cout<<"Denver: "<<88+((88/100.0)*2)<<" F"<<endl;
    cout<<"Phoenix: "<<106+((106/100.0)*2)<<" F"<<endl;

    
    return 0;
}
