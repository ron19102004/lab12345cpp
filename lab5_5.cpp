#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream outf;
    outf.open("out5_lab5.txt");
    for (int i = 48; i <= 127; i++)
    {
        outf << i <<  " ==> " << char(i) <<"\n";
    }
    outf.close();
    return 0;
}