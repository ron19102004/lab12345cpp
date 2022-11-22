#include <iostream>
using namespace std;
int main()
{
    int a, b; // khai báo biến
    cout << "Enter a's value: ";
    cin >> a; // nhập giá trị biến a
    cout << "Enter b's value: ";
    cin >> b; // nhập gía trị biến b
    swap(a, b); // hàm trao đổi a b;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}