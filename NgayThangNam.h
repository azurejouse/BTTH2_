#ifndef NGAYTHANGNAM_H
#define NGAYTHANGNAM_H
class NgayThangNam{
private:
    int iNgay, iThang, iNam; // Lưu trữ ngày, tháng, năm
public:
    NgayThangNam();
    void Nhap();
    void Xuat() const;
    bool LaNamNhuan() const;
    int SoNgayTrongThang() const;
    NgayThangNam NgayThangNamTiepTheo() const;
};
#endif
