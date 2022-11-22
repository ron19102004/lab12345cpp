#include <iostream>
using namespace std;
int main()
{
    int height, width; //khai báo biến
    cout << "Enter height : ";
    cin >> height; 
    cout << "Enter width : ";
    cin >> width;
    cout << "perimeter of rectangle is: " << (height + width) * 2 << endl; // xuất màn hình câu trong ngoặc kép kèm kết quả
    cout << "area of rectangle is: " << height * width << endl;// xuất màn hình câu trong ngoặc kép kèm kết quả
    return 0;
}