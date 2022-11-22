#include <iostream>
using namespace std;
int main()
{
    double US_Dollar;
    int select;
    cout << "Nhap gia tien menh gia US Dollar : ";
    cin >> US_Dollar;
    if (US_Dollar > 0)
    {
        cout << "Ban muon chuyen doi gia tien dollar sang gia tri tien nao duoi day.\n";
        cout << "1.Euro\n2.Japanese Yen\n3.British Pound\n4.Vietnamese Dong.\n";
        cout << "=>Chon:";
        cin >> select;
        switch (select)
        {
        case 1:
            cout << US_Dollar << " Dollar -> " << US_Dollar * 1.01 << " Euro";
            break;
        case 2:
            cout << US_Dollar << " Dollar -> " << US_Dollar * 148.61 << " Yen";
            break;
        case 3:
            cout << US_Dollar << " Dollar -> " << US_Dollar * 0.87 << " Pound";
            break;
        case 4:
            cout << US_Dollar << " Dollar -> " << US_Dollar * 24850 << " Dong";
            break;
        default:
            cout << "Su lua chon cua ban khong hop le";
        }
    }
    else
        cout << "So tien nhap vao nho hon 0. Khong the quy doi.";
    return 0;
}