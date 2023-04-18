#include <iostream>

using namespace std;

int main(){

    int gioBatDau, gioKetThuc, soGioHat;
    double thanhtoan;

    do
    {
        cout << "nhap gio bat dau: ";
        cin >> gioBatDau;
        cout << "nhap gio ket thuc: ";
        cin >> gioKetThuc;
        if (gioBatDau > 24)
        {
            cout << "gio bat dau phai nho hon 24 - moi nhap lai !" << endl;
        }
        if (gioKetThuc > 24)
        {
            cout << "gio ket thuc phai nho hon 24 - moi nhap lai !";
        }
    } while (gioBatDau > 24 || gioKetThuc > 24);
    
    //xem hát có qua 24h không
    if (gioBatDau < gioKetThuc)
    {
        soGioHat = gioKetThuc - gioBatDau;
    }
    else
    {
        soGioHat = (24 - gioBatDau) + gioKetThuc;
    }
    
    // tính tiền
    if (soGioHat <= 3)
    {
        thanhtoan = soGioHat * 30000;
    }
    else if (soGioHat < 8)
    {
        thanhtoan = 3*30000 + (soGioHat - 3)*30000*0.7;
    }
    else
    {
        thanhtoan = (3*30000 + (soGioHat - 3)*30000*0.7) * 0.9;
    }
    
    cout << "so tien thanh toan: " << thanhtoan << endl;
}
