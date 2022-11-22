#include <iostream>
using namespace std;
void FromBase10ToBase2(int n) // Tạo function chuyển đổi
{
    int listNumber[1000]; // Khai báo mảng chứa 1000 kí tự int
    int i = 0;            // khai báo biến đếm
    while (n)             // Dùng vòng while để thực hiện chuyển đổi
    {
        listNumber[i++] = n % 2; // Gán giá trị thứ i của listNumber bằng chia lấy dư của n với 2
        n /= 2;                  // chia lấy nguyên và cập nhật lại giá trị cho n
    }
    cout << "Results:";
    for (int j = i - 1; j >= 0; j--) //Xuất ra màn hình kết quả bằng vòng for 
    {
        cout << listNumber[j];
    }
}
int main()
{
    int n;                                                     // Khai báo biến n
    cout << "Input value n to change from base 10 to base 2:"; // Xuất ra màn hình yêu cầu nhập giá trị n
    cin >> n;                                                  // Nhập giá trị n
    FromBase10ToBase2(n);                            // thực hiện function
    return 0;
}