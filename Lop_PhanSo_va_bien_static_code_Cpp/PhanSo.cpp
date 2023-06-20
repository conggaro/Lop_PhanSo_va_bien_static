#include <iostream>
using namespace std;

class PhanSo{
    public:
        int tu;             // tử số
        int mau;            // mẫu số
        int STT;            // số thứ tự

    // tạo biến static đếm
    private:
        static int dem;

    // hàm khởi tạo không tham số
    public:
        PhanSo(){
            tu = 0;
            mau = 1;

            // tăng đếm lên 1
            // rồi mới gán cho STT
            dem = dem + 1;
            STT = dem;
        }

    // hàm khởi tạo có tham số
    public:
        PhanSo(int tuSo, int mauSo){
            if (mauSo == 0)
            {
                tu = 0;
                mau = 1;
                cout << "Mau so phai khac 0" << "\n";
            }
            else if (mauSo != 0)
            {
                tu = tuSo;
                mau = mauSo;
            }            
            
            // tăng đếm lên 1
            // rồi mới gán cho STT
            dem = dem + 1;
            STT = dem;
        }

    // hàm hủy
    public:
        ~PhanSo(){
            // cout << "Huy doi tuong\n";
        }

    // hàm hiển thị
    public:
        void HienThi(){
            cout << tu << "/" << mau << "\n";
        }

    // nạp chồng toán tử +
    public:
        PhanSo operator+(PhanSo dt){
            PhanSo ketQua = PhanSo();

            if (mau == dt.mau)
            {
                ketQua.tu = tu + dt.tu;
                ketQua.mau = mau;
            }
            else if (mau != dt.mau)
            {
                ketQua.tu = tu * dt.mau + dt.tu * mau;
                ketQua.mau = mau * dt.mau;
            }

            return ketQua;
        }
};

// biến static 
// --> phải được gán giá trị ở ngoài lớp PhanSo
int PhanSo::dem = 0;