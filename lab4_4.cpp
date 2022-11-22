#include <iostream>
using namespace std;
int main()
{
    double angl1, angl2, angl3;
    cout << "Nhap goc thu 1: ";
    cin >> angl1;
    cout << "Nhap goc thu 2: ";
    cin >> angl2;
    cout << "Nhap goc thu 3: ";
    cin >> angl3;
    if (angl1 > 0 && angl2 > 0 && angl3 > 0 && (angl1 + angl2 + angl3) == 180)
        cout << "3 goc la 3 goc gia tri cua tam giac.";
    else
        cout << "3 goc khong phai la 3 goc gia tri cua tam giac.";
    return 0;
}