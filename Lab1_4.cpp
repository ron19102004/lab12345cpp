#include <iostream>
using namespace std;
long long Sum(int n) //Tạo function tính tổng n số đầu tiên của số tự nhiên
{
    long long sum = 0; //khai báo biến tổng
    for (int i = 0; i < n; i++) //lặp từ 0 đến n-1 , mỗi lần lặp i tăng 1 đơn vị
    {
        sum += i; //Tổng bằng tổng cũ cộng thêm giá trị i
    }
    return sum; //Trả kết quả về cho function
}
int main()
{
    int number; //khai báo biến
    cout << "Enter N's value :"; //xuất ra màn hình thông báo nhập n số đầu tiên
    cin >> number; // nhập giá trị cho number
    cout << "Results = " << Sum(number); // xuất ra màn hình kết quả
    return 0;
}