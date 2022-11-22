#include <iostream>
using namespace std;
void Swap(double a, double b) // tạo function hoán đổi
{
    double change = a; // khai báo biến change và gán giá trị = a
    a = b; //  gán giá trị b cho a ;
    b = change; // gán giá trị change cho b tức b đang lấy giá trị của a
    cout << "Changed !!!" << endl;
    cout << "a=" << a << endl; // xuất ra a
    cout << "b=" << b << endl; // xuất ra b
}
int main()
{
    double a, b; // khai báo biến
    cout << "Enter value of a  and b:";
    cin >> a >> b; // nhập giá trị cho các biến
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    Swap(a, b); // thực hiện function Swap
    return 0;
}