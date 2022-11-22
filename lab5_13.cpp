#include <iostream>
using namespace std;
int main()
{
    int width, height;
    cout << "Nhap chieu rong: ";
    cin >> width;
    cout << "Nhap chieu cao: ";
    cin >> height;
    for (int indexH = 0; indexH < height; indexH++)
    {
        for (int indexW = 0; indexW <= width; indexW++)
        {
            cout << "*";
        }
        cout<<"\n";
    }
    return 0;
}