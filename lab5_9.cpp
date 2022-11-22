#include <iostream>
#include <math.h>
#include <fstream>
using namespace std;
bool Armstrong(int n)
{
    int index = 0, sum = 0, nCurrent = n, process;
    while (nCurrent)
    {
        nCurrent /= 10;
        index++;
    }
    nCurrent = n;
    while (nCurrent)
    {
        process = nCurrent % 10;
        sum += pow(process, index);
        nCurrent /= 10;
    }
    if (sum == n)
        return true;
    else
        return false;
}
int main()
{
    ifstream inf;
    inf.open("in9_lab5.txt");
    int n, m;
    ofstream outf;
    outf.open("out9_lab5.txt");
    while (inf >> n >> m)
    {
        for (int i = n; i <= m; i++)
        {
            if (Armstrong(i))
                outf << i << "\t";
        }
        outf << "\n";
    }
    cout<<"Success";
    inf.close();
    outf.close();
    return 0;
}
