#include <iostream>
using namespace std;
int main (){
float luong,maso,tongluong;
float thuetieubang,thuelienbang,thuethunhap;
float thanhtoanrong,tongthue ;
do{
    do{
        cout<<"cung cap ma so nhan vien : ";
        cin>>maso;
    }
    while(maso<0);
    if( maso!=0){ 
        do{
            cout<<"tong luong :";
            cin>>tongluong;
            do{
                cout<<"thue tieu bang :";
                cin>>thuetieubang;}
            while(thuetieubang>tongluong);
            do{
                cout<<"thue lien bang :";
                cin>>thuelienbang;}
            while(thuelienbang>tongluong);
            do{
                cout<<"thue thu nhap ca nhan :";
                cin>>thuethunhap;
            }
            while(thuethunhap>tongluong);
            if(thuetieubang+thuelienbang+thuethunhap>tongluong){cout<<"error!!!"<<endl;}
        }
        while(thuetieubang+thuelienbang+thuethunhap>tongluong);


        thanhtoanrong =tongluong-thuetieubang-thuelienbang-thuethunhap;
        cout<<"__________________"<<endl<<"Bao cao: "<<endl;
        cout<<"tong so tien luong:"<<tongluong<<endl;
        cout<<"Thue lien bang : "<<thuelienbang<<endl;
        cout<<"Thue tieu bang: "<<thuetieubang<<endl;
        cout<<"Thue thu nhap ca nhan : "<<thuethunhap<<endl;
        cout<<"Thanh toan rong : "<<thanhtoanrong<<endl;
        cout<<"__________________"<<endl;
    }
}
while(maso>0);
return 0;
}
