#include <iostream>
#include "SoPhuc.h"
using namespace std;
int main(){
    SoPhuc sp1, sp2;
    cout << "Nhap so phuc A:\n"; sp1.Nhap();
    cout << "Nhap so phuc B:\n"; sp2.Nhap();
    cout << "\nSo phuc A: "; sp1.Xuat();
    cout << "\nSo phuc B: "; sp2.Xuat();
    cout << "\nA + B = "; sp1.Tong(sp2).Xuat();
    cout << "\nA - B = "; sp1.Hieu(sp2).Xuat();
    cout << "\nA * B = "; sp1.Tich(sp2).Xuat();
    cout << "\nA / B = "; sp1.Thuong(sp2).Xuat();
    cout << endl;
    return 0;
}
