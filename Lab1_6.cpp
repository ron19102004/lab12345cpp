#include <iostream>
#include <cmath>
using namespace std;
//Tạo ra một function chuyển đổi
long long convert(long long number) 
{
    long long result = 0, item = 0, surplus; //Khai báo các biến 
    while (number) // SỬ dụng vòng lặp
    {
        surplus = number % 10;   // Chia lấy dư với 10 để lấy từng đuôi 1. Ví dụ 10101101 % 10 = 1
        number /= 10; // Chia lấy nguyên. Ví dụ 10101101/10 = 10100110
        result += surplus * pow(2, item++); //Tổng các kết quả sau mỗi vòng lặp
    }
    return result; //Trả về kết quả cho function convert
}
int main()
{
    long long number;   //Khai báo biến number với kiểu dữ liệu số nguyên
    cout << "Enter numbers need to convert: "; //Xuất ra màng hình yêu cầu nhập số cần chuyển đổi
    cin >> number; //Nhập giá trị vào biến number
    cout << number << " in base 2 = " << convert(number) << " in base 10"; //Xuất ra kết quả sau khi chuyển đổi
    return 0;
}
