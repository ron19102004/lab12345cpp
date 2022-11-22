#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream inf;
    inf.open("in15_lab5.txt");
    ofstream outf;
    outf.open("out15_lab5.txt");
    int n;
    while (inf >> n)
    {
        int max = 0;
        for (int i = 0; i < n; i++)
        {
            if ((i % 2) && (n % i == 0))
            {
                if (i > max)
                    max = i;
            }
        }
        outf << max << "\n";
    }
    cout << "success";
    inf.close();
    outf.close();
    return 0;
}