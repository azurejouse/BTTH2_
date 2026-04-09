#include <iostream>
#include "PhanSo.h"
#include <cmath>
using namespace std;
/*
 * Phương thức: Nhap()
 * - Input: Nhập cho iTu và iMau.
 * - Output: Lưu giá trị thuộc tính đó.
 * - Hướng giải thuật: Sử dụng cin, dùng vòng lặp do-while để bắt buộc iMau khác 0.
 */
void PhanSo::Nhap(){
    cout << "Nhap tu so: "; cin >> iTu;
    do{
        cout << "Nhap mau so (khac 0): "; cin >> iMau;
        if (iMau == 0) cout << "Mau so phai khac 0! Nhap lai.\n";
    }while(iMau == 0);
}

/**
 * Phương thức: Xuat()
 * - Input: iTu và iMau
 * - Output: Hiển thị phân số ra màn hình.
 * - Hướng giải thuật: Xuất theo dạng iTu/iMau. Xử lý trường hợp mẫu bằng 1 hoặc tử bằng 0.
 */
void PhanSo::Xuat(){
    if (iTu == 0){
        cout << "0";
    } else if (iMau == 1){
        cout << iTu;
    }else{
        // Luôn hiển thị dấu trừ ở tử nếu phân số âm
        cout << iTu << "/" << iMau;
    }
}
/*
 * Phương thức: RutGon()
 * - Input: Giá trị iTu và iMau của phân số hiện tại.
 * - Output: Phân số được đưa về dạng tối giản.
 * - Hướng giải thuật: Tìm Ước chung lớn nhất (UCLN) của tử và mẫu bằng thuật toán Euclid, sau đó chia cả tử và mẫu cho UCLN.
 */
void PhanSo::RutGon(){
    if (iTu == 0){
        iMau = 1;
        return;
    }
    int a = abs(iTu);
    int b = abs(iMau);
    // Thuật toán Euclid dùng % sẽ nhanh hơn
    while (b != 0){
        int temp = a % b;
        a = b;
        b = temp;
    }
    iTu /= a;
    iMau /= a;
    // mẫu luôn dương
    if (iMau < 0) { 
        iTu = -iTu; 
        iMau = -iMau; 
    }
}
/*
 * Các phương thức: Tong(), Hieu(), Tich(), Thuong()
 * - Input: Phân số this và phân số b.
 * - Output: PhanSo mới chứa kết quả.
 * - Hướng giải thuật: Áp dụng quy tắc cộng, trừ, nhân, chia phân số sau đó gọi RutGon().
 */
PhanSo PhanSo::Tong(PhanSo b){
    PhanSo kq;
    kq.iTu = iTu * b.iMau + b.iTu * iMau;
    kq.iMau = iMau * b.iMau;
    kq.RutGon();
    return kq;
}

PhanSo PhanSo::Hieu(PhanSo b){
    PhanSo kq;
    kq.iTu = iTu * b.iMau - b.iTu * iMau;
    kq.iMau = iMau * b.iMau;
    kq.RutGon();
    return kq;
}

PhanSo PhanSo::Tich(PhanSo b){
    PhanSo kq;
    kq.iTu = iTu * b.iTu;
    kq.iMau = iMau * b.iMau;
    kq.RutGon();
    return kq;
}
PhanSo PhanSo::Thuong(PhanSo b){
    PhanSo kq;
    // Kiểm tra nếu phân số chia (b) bằng 0 (tức là tử số của b bằng 0)
    if (b.iTu == 0) {
        cout << "Loi: Khong the chia cho phan so 0!\n";
        kq.iTu = 0; 
        kq.iMau = 1; // Trả về 0 để tránh crash chương trình
        return kq;
    }
    kq.iTu = iTu * b.iMau;
    kq.iMau = iMau * b.iTu;
    kq.RutGon();
    return kq;
}
/*
 * Phương thức: SoSanh()
 * - Input: Phân số this và phân số b.
 * - Output: Trả về 1 (Lớn hơn), 0 (Bằng), -1 (Nhỏ hơn).
 * - Hướng giải thuật: Quy đồng và so sánh tích (iTu * b.iMau) với (b.iTu * iMau).
 */
int PhanSo::SoSanh(PhanSo b){
    long long s1 = (long long)iTu * b.iMau;
    long long s2 = (long long)b.iTu * iMau;
    if (s1 > s2) return 1;
    if (s1 < s2) return -1;
    return 0;
}
