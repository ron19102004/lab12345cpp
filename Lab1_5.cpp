#include <iostream>
using namespace std;
void LargestOfThreeNumber(int a, int b, int c) //Tạo function tìm số lớn nhất trong 3 số
{
    cout << "results:" ;
    if (a > b) //Nếu a > b thì thực hiện sau if
    {
        if (a > c) // nếu a > c thực hiện sau if
        {
            cout << a; // xuất ra giá trị a nếu a > b && a > c
        }
        else
            cout << c; // xuất ra giá trị c nếu a > b && a < c
    }
    else // nếu a <b thực hiện sau else
    {
        if (b > c) //nếu  b > c thực hiện sau if
        {
            cout << b; // xuất ra giá trị b nếu b > c && b > a
        }
        else
            cout << c; // xuất ra giá trị c nếu b > a && c > b
    };
}
int main()
{
    int a, b, c; //Khai báo 3 biến
    cout << "Enter any three numbers" << endl; //xuất màn hình yêu cầu nhập 3 số
    cin >> a >> b >> c; //nhập 3 số
    LargestOfThreeNumber(a, b, c); // thực hiện function LargestOfThreeNumber
    return 0;
}