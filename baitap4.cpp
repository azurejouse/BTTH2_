#include <iostream>
#include "GioPhutGiay.h"
using namespace std;
/**
 * Phương thức: Nhap()
 * - Input: Nhập cho iGio, iPhut, iGiay
 * - Output: Lưu giá trị
 * - Hướng giải thuật: Sử dụng cin kiểm tra điều kiện (giờ 0-23, phút/giây 0-59).
 */
void GioPhutGiay::Nhap(){
    do{
        cout << "Nhap gio (0-23): "; cin >> iGio;
    }while (iGio < 0 || iGio > 23);
    do{
        cout << "Nhap phut (0-59): "; cin >> iPhut;
    }while (iPhut < 0 || iPhut > 59);
    do{
        cout << "Nhap giay (0-59): "; cin >> iGiay;
    }while (iGiay < 0 || iGiay > 59);
}
/*
 * Phương thức: Xuat()
 * - Input: Giá trị iGio, iPhut, iGiay
 * - Output: Hiển thị thời gian hh:mm:ss.
 * - Hướng giải thuật: Xuất dinh dang với dấu ":".
 */
void GioPhutGiay::Xuat() {
    cout << iGio << ":" << iPhut << ":" << iGiay;
}
/*
 * Phương thức: TinhCongThemMotGiay()
 * - Input: Thời gian hiện tại của đối tượng.
 * - Output: Thời gian được tăng thêm 1 giây.
 * - Hướng giải thuật: 
 * 1. Tăng iGiay lên 1.
 * 2. Nếu iGiay >= 60: đặt iGiay = 0 và tăng iPhut lên 1.
 * 3. Nếu iPhut >= 60: đặt iPhut = 0 và tăng iGio lên 1.
 * 4. Nếu iGio >= 24: đặt iGio = 0
 */
void GioPhutGiay::TinhCongThemMotGiay(){
    iGiay++;
    if (iGiay >= 60) {
        iGiay = 0;
        iPhut++;
        if (iPhut >= 60) {
            iPhut = 0;
            iGio++;
            if (iGio >= 24) {
                iGio = 0;
            }
        }
    }
}
