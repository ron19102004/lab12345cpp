#include <iostream>
using namespace std;
int main()
{
    int year, month;
    cout << "Nhap thang(1-12): ";
    cin >> month;
    if (month <= 12 && month >= 1)
    {
        cout << "Nhap nam: ";
        cin >> year;
        year = year % 19;
        if (year == 0 || year == 3 || year == 6 || year == 9 || year == 11 || year == 14 || year == 17)
        {
            cout << "Nam nay la nam nhuan.";
            switch (month)
            {
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                case 10:
                case 12:
                    cout << "Thang " << month << " co 31 ngay";
                    break;
                case 2:
                    cout << "Thang 2 co 29 ngay";
                    break;
                case 4:
                case 6:
                case 9:
                case 11:
                    cout << "Thang " << month << " co 30 ngay";
                    break;
            }
        }
        else
        {
            cout << "Nam nay la nam khong nhuan.";
            switch (month)
            {
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                case 10:
                case 12:
                    cout << "Thang " << month << " co 31 ngay";
                    break;
                case 2:
                    cout << "Thang 2 co 28 ngay";
                    break;
                case 4:
                case 6:
                case 9:
                case 11:
                    cout << "Thang " << month << " co 30 ngay";
                    break;
            }
        }
    }
    else
        cout << "So thang khong hop le.";
    return 0;
}