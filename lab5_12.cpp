#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    ofstream outf;
    outf.open("out12_lab5.txt");
    if (n == 0)
    {
        outf << "0";
        return 0;
    }
    else if (n == 1)
    {
        outf << "0\t1";
        return 0;
    }
    unsigned long long result[n];
    result[0] = 0;
    result[1] = 1;
    int nb = 2;
    while (nb < n)
    {
        int index = nb;
        result[nb++] = result[index - 1] + result[index - 2];
    }
    for (int i = 0; i < n; i++)
    {
        outf << result[i] << "\t";
    }
     return 0;
}