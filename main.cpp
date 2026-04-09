#include <iostream>
#include "PhanSo.h"
using namespace std;
int main(){
    PhanSo a, b;
    cout << "Nhap phan so A:" << endl;
    a.Nhap();
    cout << "Nhap phan so B:" << endl;
    b.Nhap();
    a.RutGon();
    b.RutGon();
    cout << "Phan so A (rut gon): "; a.Xuat(); cout << endl;
    cout << "Phan so B (rut gon): "; b.Xuat(); cout << endl;
    PhanSo tong = a.Tong(b);
    cout << "Tong (A + B)   : "; tong.Xuat(); cout << endl;
    PhanSo hieu = a.Hieu(b);
    cout << "Hieu (A - B)   : "; hieu.Xuat(); cout << endl;
    PhanSo tich = a.Tich(b);
    cout << "Tich (A * B)   : "; tich.Xuat(); cout << endl;
    PhanSo thuong = a.Thuong(b);
    cout << "Thuong (A / B) : "; thuong.Xuat(); cout << endl;
    // So sánh
    cout << "So sanh A va B : ";
    int cmp = a.SoSanh(b);
    if (cmp == 1) cout << "A > B";
    else if (cmp == -1) cout << "A < B";
    else cout << "A = B";
    return 0;
}
