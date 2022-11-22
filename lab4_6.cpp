#include <iostream>
#include <math.h>
using namespace std;
void phuongTrinhBatHai(double a, double b, double c)
{
    if (!a)
    {
        if (!b)
        {
            if (!c)
                cout << "Phuong trinh vo so nghiem" << endl;
            else
                cout << "Phuong trinh vo nghiem" << endl;
        }
        else
            cout << "Phuong trinh co nghiem duy nhat: " << (-c) / b << endl;
    }
    else
    {
        double del = pow(b, 2) - 4 * a * c;
        if (del < 0)
            cout << "Phuong trinh vo nghiem.";
        else if (!c)
        {
            cout << "Phuong trinh co nghiem kep.\n";
            cout << "x1 = x2 = " << (-b) / (2 * a);
        }
        else
        {
            cout << "Phuong trinh co hai nghiem phan biet.\n";
            cout << "x1 = " << ((-b) + sqrt(del)) / (2 * a) << endl;
            cout << "x1 = " << ((-b) - sqrt(del)) / (2 * a) << endl;
        }
    }
}
int main()
{
    double a, b, c;
    cout << "Nhap ba he so a,b,c tuong duong voi phuong trinh ax^2+bx+c=0 \n";
    cin >> a >> b >> c;
    phuongTrinhBatHai(a, b, c);
    return 0;
}
