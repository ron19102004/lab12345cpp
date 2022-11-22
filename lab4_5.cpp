#include <iostream>
using namespace std;
int main()
{
    double length1, width1, length2, width2;
    cout << "Nhap chieu dai va chieu rong hinh chu nhat 1: ";
    cin >> length1 >> width1;
    cout << "Nhap chieu dai va chieu rong hinh chu nhat 2: ";
    cin >> length2 >> width2;
    if (length1 > 0 && length2 > 0 && width1 > 0 && width2 > 0)
    {
        if ((length1 * width1) == (length2 * width2))
            cout << "Dien tich hai hinh bang nhau.";
        else if ((length1 * width1) > (length2 * width2))
            cout << "Dien tich hinh chu nhat 1 lon hon dien tich hinh chu nhat 2.";
        else
            cout << "Dien tich hinh chu nhat 2 lon hon dien tich hinh chu nhat 1.";
    }
    else
        cout << "Du lieu nhap vao khong hop le.";
    return 0;
}