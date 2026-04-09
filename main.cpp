#include <iostream>
#include "NgayThangNam.h"
using namespace std;
int main(){
    NgayThangNam nt;
    nt.Nhap();
    cout << "Ngay vua nhap: ";
    nt.Xuat();
    NgayThangNam tiepTheo = nt.NgayThangNamTiepTheo();
    cout << "\nNgay tiep theo: ";
    tiepTheo.Xuat();
    return 0;
}