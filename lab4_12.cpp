#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char a;
    ifstream inf;
    inf.open("in12_lab4.txt");
    ofstream outf;
    outf.open("out12_lab4.txt");
    while (inf >> a)
    {
        if (a >= 'A' && a <= 'Z' || a >= 'a' && a <= 'z')
            outf << "A\n";
        else if (a >= '0' && a <= '9')
            outf << "D\n";
        else
            outf << "S\n";
    }
    cout << "Success, please find the file named 'out12_lab4.txt'";
    inf.close();
    outf.close();
    return 0;
}