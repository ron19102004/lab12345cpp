#include <iostream>
using namespace std;
int Lab14(int number) // tạo function tính tổng số lẻ
{
    int results = 0;                  // khai báo biến kết quả và gán giá trị ban đầu bằng 0
    for (int i = 0; i <= number; i++) // lặp từ giá trị 0 đến giá trị number đưa vào
    {
        results += (i % 2) ? i : 0;
        /* giải thích câu lệnh " results += (i % 2) ? i : 0;  "  như sau:
       ->  " results = results + i  " khi i là số lẻ
       -> "results = results + 0 " khi i là số chẵn
        */
    }
    return results; // trả kết quả về cho function
}
int main()
{
    int number; // khai báo biến
    cout << "Enter N's value:";
    cin >> number;                       // nhập giá trị number
    cout << "Results:" << Lab14(number); // xuất ra kết quả
    return 0;
}