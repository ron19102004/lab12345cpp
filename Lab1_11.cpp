#include <iostream>
#include <cmath>
using namespace std;
void drawLine() //function vẻ đường ngăn cách bằng dấu  '-'
{
    for (int i = 0; i <= 40; i++)
    {
        cout << "-";
    }
    cout << "-" << endl;
}
void A_P_Square(double n)//function tính diện tích và chu vi hình vuông
{
    cout << "Area of Square:" << pow(n, 2) << endl;// diện tích
    cout << "Perimeter of Square:" << 4 * n << endl;//chu vi
}
void A_P_Rectangle(double x, double y)//function tính diện tích và chu vi hình hình chử nhật
{
    cout << "Area of Rectangle:" << x * y << endl; //diện tích
    cout << "Perimeter of Rectangle:" << (x + y) * 2 << endl; // chu vi
}
void A_P_Circle(double r)//function tính diện tích và chu vi hình tròn
{
    const double PI = 3.1415;
    cout << "Area of Circle:" << PI * pow(r, 2) << endl; //diện tích
    cout << "Perimeter of Circle:" << 2 * PI * r << endl; //chu vi
}
void A_P_Triangle(float a, float b, float c)//function tính diện tích và chu vi hình tam giác khi biết 3 cạnh
{
    if (a >= b + c || b >= a + c || c >= a + b) 
    /* dùng các điều kiện để ràng buộc có phải là tam giác hay không.
    @  1 trong 3 biểu thức trong if nếu đúng thì 3 giá trị a , b, c không thể tạo thành tam giác
    @ khi cả 3 biểu thức trong if đều sai thì thực hiện else
    */
    {
        cout << "IS NOT TRIANGLE !!!";
    }
    else
    {
        float pe = a + b + c;
        float p = pe / 2;
        cout << "Area of Triangle:" << sqrt(p * (p - a) * (p - b) * (p - c)) << endl;// tính diện tích bằng hệ thức hê rông
        cout << "Perimeter of Triangle:" << pe << endl;
    }
}
int main()
{
    double n, x, y, r; //khai báo các biến
    float a, b, c; //khai báo các biến
    cout << "Enter n's value of Square: ";
    cin >> n; //nhập giá trị cho biến
    A_P_Square(n);
    drawLine();
    cout << "Enter value of x and y of Rectangle: ";
    cin >> x >> y;//nhập giá trị cho biến
    A_P_Rectangle(x, y);
    drawLine();
    cout << "Enter r's value of Rectangle: ";
    cin >> r;//nhập giá trị cho biến
    A_P_Circle(r);
    drawLine();
    cout << "Enter  value of a , b and c of Triangle: ";
    cin >> a >> b >> c;//nhập giá trị cho biến
    A_P_Triangle(a, b, c);
    drawLine();
    return 0;
}