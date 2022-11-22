#include <iostream>
#include <fstream>
using namespace std;
void swap(long &x, long &y)
{
    if (x > y)
    {
        long sw = x;
        x = y;
        y = sw;
    }
}
int main()
{
    ifstream inf;
    inf.open("in10_lab4.txt");
    long a, b, c;
    ofstream outf;
    outf.open("out10_lab4.txt");
    while (inf >> a >> b >> c)
    {
        if (a >= (-999999999) && b >= (-999999999) && c >= (-999999999) && a <= 999999999 && b <= 999999999 && c <= 999999999)
        {
            if (a > b)
            {
                swap(a, b);
                if (b > c)
                    swap(b, c);
            }
            else if (b > c)
            {
                swap(b, c);
                if (a > b)
                    swap(a, b);
            }
            outf << a << "\t" << b << "\t" << c << "\n";
        }
        else
        {
            outf << "Not valid.\n";
        }
    }
    cout << "Success, please find the file named 'out10_lab4.txt'";
    inf.close();
    outf.close();
    return 0;
}