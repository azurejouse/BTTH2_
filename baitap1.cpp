#include <iostream>
#include "NgayThangNam.h"
using namespace std;
/*
 * Phương thức: Nhap()
 * Input: Nhập từ bàn phím các biến iNgay, iThang, iNam
 * Output: Lưu giá trị
 * Hướng giải thuật: Sử dụng lệnh cin để nhận dữ liệu
 */
void NgayThangNam::Nhap() {
    cout << "Nhap ngay: "; cin >> iNgay;
    cout << "Nhap thang: "; cin >> iThang;
    cout << "Nhap nam: "; cin >> iNam;
}
/*
 * Phương thức: Xuat()
 * Input: Giá trị của iNgay, iThang, iNam[
 * Output: Xuất ngày tháng năm lên màn hình
 * Hướng giải thuật: Xuất dd/mm/yyyy băng hàm cout
 */
void NgayThangNam::Xuat() {
    cout << iNgay << "/" << iThang << "/" << iNam;
}

/**
 * Phương thức: LaNamNhuan()
 * Input: Biến iNam
 * Output: Trả về 1 nếu là năm nhuận, 0 nếu không
 * Hướng giải thuật: Kiểm tra (năm chia hết cho 400) or (chia hết cho 4 và không chia hết cho 100)
 */
bool NgayThangNam::LaNamNhuan() {
    return (iNam % 4 == 0 && iNam % 100 != 0) || (iNam % 400 == 0);
}
/*
 * Phương thức: SoNgayTrongThang()
 * Input: iThang và iNam
 * Output: Số ngày tối đa của tháng
 * Hướng giải thuật: Sử dụng mảng lưu số ngày của tháng, nếu là tháng 2, gọi hàm LaNamNhuan() để xác định 28 hay 28 ngày
 */
int NgayThangNam::SoNgayTrongThang() {
    int ngay[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (iThang == 2 && LaNamNhuan()) return 29;
    if (iThang >= 1 && iThang <= 12) return ngay[iThang];
    return 0;
}
/*
 * Phương thức: NgayThangNamTiepTheo()
 * Input: this
 * Output: NgayThangNam của ngày tiếp sau đó
 * Hướng giải thuật: 
 * 1. Nếu chưa phải ngày cuối tháng (iNgay < SoNgayTrongThang), tăng iNgay
 * 2. Nếu là ngay cuối tháng, đặt iNgay = 1. Tăng iThang. Nếu iThang > 12, đặt iThang = 1 và tăng iNam
 */
NgayThangNam NgayThangNam::NgayThangNamTiepTheo(){
    NgayThangNam kq = *this;
    int maxDays = kq.SoNgayTrongThang();
    if (kq.iNgay < maxDays){
        kq.iNgay++;
    }else{
        kq.iNgay = 1;
        if (kq.iThang < 12){
            kq.iThang++;
        }else{
            kq.iThang = 1;
            kq.iNam++;
        }
    }
    return kq;
}