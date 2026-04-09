#include <iostream>
#include "SoPhuc.h"
using namespace std;
/*
 * Phương thức: Nhap()
 * - Input: Nhập cho dThuc và dAo
 * - Output: Lưu giá trị
 * - Hướng giải thuật: cin để nhận phần thực và phần ảo.
 */
void SoPhuc::Nhap(){
    cout << "Nhap phan thuc: "; cin >> dThuc;
    cout << "Nhap phan ao: "; cin >> dAo;
}
/*
 * Phương thức: Xuat()
 * - Input: Giá trị dThuc, dAo hiện tại.
 * - Output: Hiển thị số phức dạng (a + bi).
 * - Hướng giải thuật: Xuất phần thực, kèm ký tự 'i'.
 */
void SoPhuc::Xuat(){
    cout << "(" << dThuc << (dAo >= 0 ? " + " : " - ") << abs(dAo) << "i)";
}
/*
 * Phương thức: Tong, Hieu, Tich, Thuong
 * - Input: Số phức hiện tại và số phức b truyền vào.
 * - Output: Đối tượng SoPhuc mới là kết quả phép tính.
 * - Hướng giải thuật: 
 * + Tong: (a + bi) + (c + di) = (a+c) + (b+d)i
 * + Hieu: (a + bi) - (c + di) = (a-c) + (b-d)i
 * + Tich: (a + bi)*(c + di) = (ac - bd) + (ad + bc)i
 * + Thuong: (a + bi)/(c + di) = [(ac+bd)/(c^2+d^2)] + [(bc-ad)/(c^2+d^2)]i
 */
SoPhuc SoPhuc::Tong(SoPhuc b){
    SoPhuc kq;
    kq.dThuc = dThuc + b.dThuc;
    kq.dAo = dAo + b.dAo;
    return kq;
}
SoPhuc SoPhuc::Hieu(SoPhuc b){
    SoPhuc kq;
    kq.dThuc = dThuc - b.dThuc;
    kq.dAo = dAo - b.dAo;
    return kq;
}
SoPhuc SoPhuc::Tich(SoPhuc b){
    SoPhuc kq;
    kq.dThuc = dThuc * b.dThuc - dAo * b.dAo;
    kq.dAo = dThuc * b.dAo + dAo * b.dThuc;
    return kq;
}
SoPhuc SoPhuc::Thuong(SoPhuc b){
    SoPhuc kq;
    double mau = b.dThuc * b.dThuc + b.dAo * b.dAo;
    kq.dThuc = (dThuc * b.dThuc + dAo * b.dAo) / mau;
    kq.dAo = (dAo * b.dThuc - dThuc * b.dAo) / mau;
    return kq;
}
