#include <iostream>
using namespace std;
int main()
{
     int x, y;
     cout << "We have 2 variables is x and y \n ";
     cout << "Enter its value -> x and y :";
     cin >> x >> y;
     cout << "Gia tri x    Gia tri y\t\tBieu thuc\t\tKet qua " << endl;
     cout << x << "|\t\t"
          << y << "|\t\t"
          << "A = y + 3\t\t"
          << "|A=" << y + 3 << endl;
     cout << x << "|\t\t"
          << y << "|\t\t"
          << "B = y - 2\t\t"
          << "|B=" << y - 2 << endl;
     cout << x << "|\t\t"
          << y << "|\t\t"
          << "C = y * 5\t\t"
          << "|C=" << y * 5 << endl;
     cout << x << "|\t\t"
          << y << "|\t\t"
          << "D = x / y\t\t"
          << "|D=" << double(x / y) << endl;
     cout << x << "|\t\t"
          << y << "|\t\t"
          << "E = x % y\t\t"
          << "|E=" << x % y << endl;

     return 0;
}