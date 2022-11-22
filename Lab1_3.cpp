#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;
long convert(long number) /*Tạo ra function chuyển đổi 8->10*/
{
    long results = 0, item = 0, surplus; // Khai báo các biến
    while (number)                      // Sử dụng vòng while
    {
        surplus = number % 10;                // Chia lấy dư number với  
        number /= 10;                         // Chia lấy nguyên number với  
        results += surplus * pow(8, item++); /*Cộng kết quả.
        Ví dụ với yêu cầu bài này là từ 8-> 10 :
        ta có ví dụ với số 11672
        @Ban đầu results=0, item=0 -> surplus=11672%10=2 , number=11672/10 = 1167, results=0 + 2 * 8 ^ 0  =2
        @ results=2, item=1 -> surplus=1167%10=7,number=1167/10=116, results=2+ 7 * 8 ^ 1 = 58
        @ results= 58, item=2-> surplus=116%10=6,number=116/10=11, results=58+ 6*8^2=442
        @results=422, item=3 -> surplus=11%10=1,number=11/10=1, results=442+ 1 * 8^ 3 =954
        @results=953,item=4-> surplus=1%10=1,number= 1/10=0, results=954+ 1*8^4=5050
        @results=0 -> vòng while hoàn tất (Vì while nhận giá trị true và false, mà mặc định 0 là false tức vòng lặp sẽ không chạy )
        */
    }
    return results; // Trả kết quả về cho function
}
void convert10To16(long number) // Tạo function chuyển đổi từ hệ 10 sang hệ 16
{
    string results[10000];    // mảng chứa kết quả
    int surplus, index = 0;    // Khai báo các biến
    char list[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'}; /* Khai báo mảng chuỗi kí tự*/
    while (number)     // Vòng lặp while để chuyển đổi
    {
        surplus = number % 16;    // Chia lấy dư number với 16
        for (int i = 0; i < strlen(list); i++) /*Vòng lặp for chạy từ i =0 đến khi i < độ dài của mảng list*/
        {
            if (surplus == i) /*Nếu số dư của kết quả lấy dư bằng với số thứ tự đếm của vòng lặp thì ta thực hiện câu lệnh sau if*/
            {
                results[index++] = list[i]; /*gán giá trị thứ index của results bằng giá trị của mảng list tại vị trí i  */
            }
        }
        number /= 16; // Chia lấy nguyên number với 16
        /*Ví dụ trong vòng lặp này: ta có số 5050 hệ 10 chuyển thành hệ 16:
         1. number=5050,index=0-> surplus = 5050% 16 = 10 ,  results[0]='A', index =1 
        2.  -> results[1]='B', index =2
        3. -> results[2] = '3' , index =3
        4  -> results[3] = '1', index = 4
         */
    }
    for (int i = index - 1; i >= 0; i--) //Dùng vòng lặp for để xuất kết quả từ index -1 đến 0
    {
        cout << results[i]; // xuất ra màn hình giá trị của results tại i 
    }
}
int main()
{
    long number;                                     // Khai báo biến number
    cout << "Enter number's value need to convert:"; // Xuất màn hình yêu cầu nhập số cần chuyển
    cin >> number;                                   // Nhập số cần chuyển đổi
    cout << "Results from base 8 to base 16 is ->";  // Xuất ra màn hình dòng chử thông báo kết quả
    convert10To16(convert(number));           // Thực hiện function chuyển đổi từ hệ 8 lên hệ 10
    return 0;
}