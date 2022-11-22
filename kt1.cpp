#include <iostream>
using namespace std;
int main()
{
    int n;
    float s = 0;
    cout << "nhap n:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        s = s + 1.0/ (i*i);
    }
    cout<<"ket qua : "<< s;
    return 0;
}