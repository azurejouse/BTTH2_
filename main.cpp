#include <iostream>
#include "NgayThangNam.h"
using namespace std;
int main(){
    NgayThangNam nt;
    // Gọi phương thức Nhap() để nhập dữ liệu 
    nt.Nhap();
    cout << "Ngay vua nhap: ";
    nt.Xuat(); // Gọi phương thức Xuat()
    // Ngay kế tiếp bằng các hàm
    NgayThangNam tiepTheo = nt.NgayThangNamTiepTheo();
    cout << "\nNgay tiep theo: ";
    tiepTheo.Xuat();
    return 0;
}
