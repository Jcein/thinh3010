/*Một rạp chiếu phim được giữ lại 20% tổng doanh thu thu được từ việc bán vé. Phần
còn lại chuyển cho nhà phân phối phim. Viết chương trình tính số tiền cho phòng vé
và nhà phân phối. Chương trình cần yêu cầu nhập tên phim, số vé cho người lớn và
số vé cho trẻ em đã được bán.
Biết:
- Giá vé cho người lớn là 10 đô la;
- Giá vé cho trẻ em là 6 đô la*/
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
    int porn,young;
    string film;
    cout<<"nhap ten phim: ";
    getline(cin,film);
    cout<<"So ve cho nguoi lon: ";
    cin>>porn;
    cout<<"So ve co tre em: ";
    cin>>young;
    cout<< setprecision(2)<<fixed<<"So tien cho phong ve: "<<((porn*10+young*6)/100.0)*20<<" $"<<endl;
    cout<< setprecision(2)<<fixed<<"So tien cho nha phan phoi: "<<((porn*10+young*6)/100.0)*80<<" $";
    
    return 0;
}
