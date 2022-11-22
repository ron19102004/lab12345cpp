#include <iostream>
#include <cmath>
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
void convert10To8(int number) // Tạo ra function chuyển từ 10->8
{
    int listNumber[1000]; // Khai báo 1 mảng chứa 1000 phần tử để chứa kết quả.
    int item = 0;         // Khai báo biến đếm có giá trị ban đầu là 0
    while (number)        // Sử dụng vòng lặp while nếu number>0
                          /*Ta ví dụ khi ta có 4182 cơ số 10.
                              Ban đầu item = 0 -> lặp lần đầu listNumber[0] = 4182 % 8 = 6 & number = 4182/8=522
                              number=522 & item =1 -> lần 2 listNumber[1]=522%8 = 2 & number =522/8=65
                              number=65 & item =2 -> lần 3 listNumber[2]=65%8 =1 & number = 65/8=8
                              number=8& item = 3 -> lần 4 listNumber[3]=8%8 =0 & number =8/8=1
                              number=1 & item=4 -> lần 5 listNumber[4]= 1 % 8 =1 & number = 1/8=0
                              number=0 & item =5 -> vòng while hoàn tất (Vì while nhận giá trị true và false, mà mặc định 0 là false tức vòng lặp sẽ không chạy )
                              */
    {
        listNumber[item++] = number % 8; // Chia lấy dư number với 8 sau đó đưa kết quả gán vào phần tử thứ item của mảng listNumber. Sau đó tăng item lên 1 đơn vị
        number /= 8;                     // Chia lấy nguyên number với 8 sau đó gán ngược lại cho chính nó
    }
    cout << "Results:";                 // Xuất ra kết quả
    for (int j = item - 1; j >= 0; j--) /* Dùng vòng  for lặp để xuất kết quả ngược lại để đúng với đáp án.
    Với giá trị bắt đầu từ item - 1 , khi biến j lớn hơn hoặc bằng 0 thì vòng lặp vẫn chạy, sau mỗi lần lặp biến j sẽ bị trừ đi 1 đơn vị.
     */
    {
        cout << listNumber[j];
    }
}
int main()
{
    string number;                                   // Khai báo biến number với giá trị là một chuỗi
    cout << "Enter number's value need to convert:"; // In ra thông báo nhập số cần chuyển đổi
    cin >> number;                                   // Nhập giá trị cho biến number
    convert10To8(convert16To10(number));             /*Thực hiện function chuyển đổi từ 10->8 với giá trị đưa vào là function chuyển đổi từ 16->10 mà hàm chuyển từ 16->10 được đưa giá trị number vào --> ta được kết quả chuyển từ 16->8*/
    return 0;
}