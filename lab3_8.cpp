#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    const double PI = 3.1415;
    double deg;
    cout << "Nhap do: ";
    cin >> deg;
    cout << "Sin(" << deg << ")=" << sin((deg * PI) / 180) << endl;
    cout << "Cos(" << deg << ")=" << cos((deg * PI) / 180) << endl;
    cout << "Tan(" << deg << ")=" << tan((deg * PI) / 180) << endl;
    cout << "Cotan(" << deg << ")=" << 1.0 / (tan((deg * PI) / 180)) << endl;
    return 0;
}