#ifndef NGAYTHANGNAM_H
#define NGAYTHANGNAM_H
class NgayThangNam{
private:
    int iNgay, iThang, iNam; // Lưu trữ ngày, tháng, năm
public:
    void Nhap();
    void Xuat();
    bool LaNamNhuan();
    int SoNgayTrongThang();
    NgayThangNam NgayThangNamTiepTheo();
};
#endif
