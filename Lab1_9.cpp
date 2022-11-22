#include <iostream>
#include <string.h>
using namespace std;
int convert16To10(string number) // Tạo ra function chuyển đổi từ 16->10
{
    int result = 0;                           // Khai báo biến kết quả
    for (int i = 0; i < number.length(); i++) /*Vòng lặp for để lặp từ kí tự trong chuỗi string number được đưa vào*/
    {
        int item = 0;                             // Khai báo biến số dư
        if (number[i] >= '0' && number[i] <= '9') /*Nếu kí tự thứ i của chuỗi string nằm trong đoạn '0' - '9' của bộ ASCII thì thực hiện dòng lệnh sau if */
        {
            item = number[i] - '0'; /*Chuyển đổi từ kiểu string sang int .
            Ví dụ ta có 12AB thì number[0] = '1'.
            Mà '1' nằm trong đoạn '0' - '9' của bộ ASCII nên ta có '1' - '0' <=> 49 - 48 = 1
            */
        }
        else if (number[i] >= 'A' && number[i] <= 'F') /*Nếu thứ tự thứ i của chuỗi string nằm  trong đoạn 'A'-'F' của bộ ASCII thì ta thực hiện dòng lệnh sau else*/
        {
            item = number[i] - 'A' + 10; /*Chuyển đổi từ kiểu string sang int.
            Ví dụ ta có 12AB thì number[2] = 'A'.
            Mà 'A' nằm trong đoạn 'A'-'F' của bộ ASCII nên ta có 'A'-'A'+10 <=>  65  - 65 +10 =10
            */
        }
        result = result * 16 + item; /*Tìm số bị chia khi biết thương và số dư.
         Vd:  100 / 16 = 6 dư 4 -> khi biết dư 4 và thương 6 ta dễ dàng tìm được
         số bị chia bằng cách 6*16+4=100
         */
    }
    return result; // Trả về kết quả cho function
}
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
    string number; //khai báo biến number
    cout << "Nhap so can chuyen doi: ";
    cin >> number; //nhập giá trị cho biến number
    cout << number << " co so 16 ->  ";
    FromBase10ToBase2(convert16To10(number)); // thực hiện function
    cout << " co so 2";
    return 0;
}