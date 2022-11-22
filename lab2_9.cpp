#include <iostream>
#include <iomanip>
using namespace std;
double ConvertDeg(double deg, double minute, double second)
{
    return deg + minute / 60 + second / 3600;
}
void EnterValue(double &deg, double &minute, double &second)
{
    cout << "Enter degree:  ";
    cin >> deg;
    cout << "Enter minute:";
    cin >> minute;
    cout << "Enter second: ";
    cin >> second;
}
void ConvertToDeg(double valueConvert)
{
    cout << "DegT:  " << (int)valueConvert << endl;
    cout << "Minute: " << (int)((valueConvert - (int)valueConvert) * 60) << endl;
    cout << "Second: " << (float)(valueConvert - (int)valueConvert - ((float)((int)((valueConvert - (int)valueConvert) * 60)) / 60.f)) * 3600.f << endl;
}
int main()
{
    double degF, minuteF, secondF, degS, minuteS, secondS; // khai báo biến
    cout << "First corner\n";
    EnterValue(degF, minuteF, secondF); // nhập giá trị của góc thứ 1
    cout << "-------------------------------------\n";
    cout << "Seconds corner\n";
    EnterValue(degS, minuteS, secondS); // nhập giá trị của góc thứ 2
    cout << "-------------------------------------\n";
    // gọi hàm chuyển đổ độ và tính toán
    cout << "Result|| " << endl;
    ConvertToDeg(180 - ConvertDeg(degF, minuteF, secondF) - ConvertDeg(degS, minuteS, secondF));
    return 0;
}