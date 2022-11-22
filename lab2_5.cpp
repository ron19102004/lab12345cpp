#include <iostream>
using namespace std;
int main()
{
    int a, b; //khai báo biến 
    cout << " Enter a's value: ";
    cin >> a;
    cout << "Enter b's value: ";
    cin >> b;
    cout << " a + b = " << a + b << endl; // xuất màn hình câu trong ngoặc kép kèm kết quả
    cout << " a - b = " << a - b << endl; // xuất màn hình câu trong ngoặc kép kèm kết quả
    cout << " a x b = " << a * b << endl; // xuất màn hình câu trong ngoặc kép kèm kết quả
    cout << " a / b = " << (double)a / b << endl;
    return 0;
}