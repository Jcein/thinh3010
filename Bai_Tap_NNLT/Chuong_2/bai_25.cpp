/*Viết một chương trình chơi chữ với người dùng. Chương trình sẽ thực hiện hỏi những
dùng những thông tin sau đây:
 Tên của người chơi
 Tuổi của người chơi
 Tên thành phố
 Tên trường đại học
 Lĩnh vực chuyên môn
Trang | 9
 Loại động vật
 Tên thú cưng
Sau khi người dùng nhập vào những thông tin này, chương trình sẽ hiển thị một câu
truyện như sau, với việc chèn các thông tin của người dùng vào các vị trí tương ứng
thích hợp:*/
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    string name,address,school, nghanh,pet,petName;
    int age;
    cout<<"Ten cua ban: ";
    getline(cin,name);
    cout<<"Tuoi cua ban: ";
    cin>>age;
    cin.ignore();
    cout<<"dia diem ban dang song: ";
    getline(cin,address);
    cout<<"Ban dang hoc truong nao: ";
    getline(cin,school);
    cout<<"Linh vuc chuyen mon: ";
    getline(cin,nghanh);
    cout<<"Pet cua ban la con gi: ";
    getline(cin,pet);
    cout<<"Ten pet cua : ";
    getline(cin,petName);
    cout<<"There once was a person named "<<name<<" who lived in "<<address<<". At the age of "<<age<<", "<<name<<" went to college at "<<school<<". "<<name<<" gzaduated and went to work as a "<<nghanh<<". Then, "<<name<<" adopted a(n) "<<pet<<" named "<<petName<<". They both lived happily ever afteri";

    return 0;
}
