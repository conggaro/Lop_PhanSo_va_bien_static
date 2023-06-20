#include <iostream>
#include "PhanSo.cpp"
using namespace std;

int main(){
    // tạo đối tượng
    PhanSo dt1 = PhanSo(4, 3);
    PhanSo dt2 = PhanSo(1, 3);
    PhanSo dt3 = PhanSo(1, 1);

    cout << "Phan so vua tao:\n";
    dt1.HienThi();
    dt2.HienThi();
    dt3.HienThi();

    cout << "\nDem doi tuong:\n";
    cout << dt1.STT << "\n";
    cout << dt2.STT << "\n";
    cout << dt3.STT << "\n\n"; 

    cout << "Tinh tong:\n";
    dt3 = dt1 + dt2;
    dt3.HienThi();

    cout << "\n";

    return 0;
}