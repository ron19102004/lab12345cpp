#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;
//Tạo ra một function chuyển đổi 2->10
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
void convert10To16(long long number) // Tạo function chuyển đổi từ hệ 10 sang hệ 16
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
    long long number; //khai báo biến number
    cout << "Enter number's value need to convert:";
    cin >> number; //nhập giá trị cho biến number
    cout << "Results from base 2 to base 16 is ->";
    convert10To16(convert(number)); //thực hiện function
    return 0;
}