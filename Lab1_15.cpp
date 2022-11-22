#include <iostream>
using namespace std;
void Fibonacci(int n) // tạo function tìm dãy fibonacci
{
    unsigned long long results[n]; // Khai báo mảng có n phần tử
    results[0] = 0;                    // giá trị đầu tiên của mảng mặc định bằng 0
    results[1] = 1;                    // giá trị thứ 2 của mảng mặc định bằng 1
    results[2] = 1;                    // giá trị thứ 3 của mảng mặc định bằng 1
    int index = 3;                     // khai báo biến đếm
    while (index < n)
    {
        int i = index; // khai báo biến tính
        results[index++] = results[i - 1] + results[i - 2];
        /* giải thích câu lệnh   :  results[index++] = results[i - 1] + results[i - 2];
        @ khi giá trị n đưa vào  > 3 thì thực hiện phép tính trên
        @ ví dụ khi bằng 4:  results[3] = results[2] + results[1] = 1 + 1 = 2
        @ ví dụ khi bằng 5: 
                            -> results[3] = results[2] + results[1] = 1 + 1 = 2
                            -> results[4] = results[3] + results[2] = 2 + 1 = 3
        ...tương tự khi n bất kì
        */
    }
    for (int i = 0; i < n; i++) // dùng for xuất tất cả các giá trị có trong mảng results từ 0 tới n
    {
        cout << " " << results[i];
    }
}
int main()
{
    int n; //khai báo biến n
    cout << "enter n: ";
    cin >> n; // nhập giá trị n
    cout << "list number Fibonacci is: ";
    Fibonacci(n); // thực hiện function fibonacci
    return 0;
}