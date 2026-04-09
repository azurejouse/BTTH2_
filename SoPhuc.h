#ifndef SOPHUC_H
#define SOPHUC_H
class SoPhuc{
private:
    double dThuc, dAo;
public:
    void Nhap();
    void Xuat();
    SoPhuc Tong(SoPhuc b);
    SoPhuc Hieu(SoPhuc b);
    SoPhuc Tich(SoPhuc b);
    SoPhuc Thuong(SoPhuc b);
};
#endif
