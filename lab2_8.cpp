#include <iostream>
using namespace std;
void lab2_8(int numberDays)
{
    cout << "Years:" << numberDays / 365 << endl;
    cout << "Months:" << (numberDays % 365) / 30 << endl;
    cout << "Days:" << (numberDays % 365) % 30 << endl;
}
int main()
{
    int days; //khai báo biến
    cout << "Enter number need to change:";
    cin >> days;
    lab2_8(days); // truyền tham sô days vào hàm lab2_8 đã viết
    return 0;
}