#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream inf;
    inf.open("in17_lab5.txt");
    ofstream outf;
    outf.open("out17_lab5.txt");
    int number;
    while (inf >> number)
    {
        if (number <= 0)
            outf << "N\n";
        else
        {
            int sum = 0, item = 0;
            while (sum < number)
            {
                item++;
                sum += item;
            }
            outf << item - 1 << "\n";
        }
    }
    cout << "success";
    inf.close();
    outf.close();
    return 0;
}