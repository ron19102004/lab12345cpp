#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int number, sum = 0;
    ifstream inf;
    inf.open("in4_lab5.txt");
    ofstream outf;
    outf.open("out4_lab5.txt");
    while (inf >> number)
    {
        for (int i = 1; i <= number; i++)
        {
            sum += (i * i);
        }
        outf << sum << "\n";
    }
    inf.close();
    outf.close();
    return 0;
}