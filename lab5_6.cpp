#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream outf;
    outf.open("out6_lab5.txt");
    int n;
    cout << "Nhap n = ";
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
        outf << i << " ";
    }
    outf.close();
    return 0;
}