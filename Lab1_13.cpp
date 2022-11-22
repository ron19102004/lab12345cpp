#include <iostream>
using namespace std;
void Lab13(int number) // tạo function tìm số chẵn
{
    int results;
    for (int i = 1; i <= number; i++) // lặp từ giá trị 1 đến giá trị number đưa vào
    {
        if (!(i % 2)) // nếu i chia hết cho 2 thì xuất màn hình giá trị i
        {
            cout << i << " ";
        }
    }
}
int main()
{
    int number; // khai báo biến
    cout << "Enter N's value:";
    cin >> number; // nhập giá trị number
    Lab13(number);
    return 0;
}