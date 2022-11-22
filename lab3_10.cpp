#include <iostream>
using namespace std;
int main()
{
    int number, result = 0;
    cout << "Nhap so co 2 chu so : ";
    cin >> number;
    if (9 < number && number < 100)
    {
        cout << "Ket qua tong hai chu so :";
        while (number)
        {
            result += number % 10;
            number /= 10;
        }
        cout << result;
    }
    else
        cout << "So ban nhap khong phai so co hai chu so !";
    return 0;
}