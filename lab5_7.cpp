#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int n, result = 0;
    ifstream inf;
    inf.open("in7_lab5.txt");
    ofstream outf;
    outf.open("out7_lab5.txt");
    while (inf >> n)
    {
        for (int i = 0; i <= n; i++)
        {
            result += (!(i % 2)) ? i : 0;
        }
        outf << result << "\n";
    }
    inf.close();
    outf.close();
    return 0;
}