#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x, y;
    cout << "Nhap hai so x va y: ";
    cin >> x >> y;
    cout << "p = x * y = " << x << " * " << y << " = " << x * y << endl;
    cout << "s = x + y = " << x << " + " << y << " = " << x + y << endl;
    cout << "p = s^2 + p(sx)*(x+y) = " << pow((x + y), 2) + (x * y) * ((x + y) * x) * (x + y);
    return 0;
}