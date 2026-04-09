#ifndef PHANSO_H
#define PHANSO_H
class PhanSo{
private:
    int iTu, iMau; // Thuộc tính tử số và mẫu số
public:
    void Nhap();
    void Xuat();
    void RutGon();
    PhanSo Tong(PhanSo b);
    PhanSo Hieu(PhanSo b);
    PhanSo Tich(PhanSo b);
    PhanSo Thuong(PhanSo b);
    int SoSanh(PhanSo b);
};
#endif
