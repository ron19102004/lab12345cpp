#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream inf;
    inf.open("in16_lab5.txt");
    ofstream outf;
    outf.open("out16_lab5.txt");
    int number;
    while (inf >> number)
    {
        int process, result[5], i = 0;
        while (number)
        {
            process = number % 10;
            if (process % 2)
            {
                if (i == 0)
                {
                    result[i++] = process;
                }
                else
                {
                    bool isExist = false;
                    for (int j = 0; j < i; j++)
                    {
                        if (result[j] == process)
                            isExist = true;
                    }
                    if (!isExist)
                        result[i++] = process;
                }
            }
            number /= 10;
        }
        if (i == 0)
        {
            outf << "N\n";
        }
        else
        {
            for (int index = i - 1; index >= 0; index--)
            {
                outf << result[index];
            }
            outf << "\n";
        }
    }
    cout << "success";
    inf.close();
    outf.close();
    return 0;
}