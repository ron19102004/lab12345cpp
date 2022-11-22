#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream inf;
    inf.open("in11_lab4.txt");
    double a, b, c;
    ofstream outf;
    outf.open("out11_lab4.txt");
    while (inf >> a >> b >> c)
    {
        if (a > 0 && b > 0 && c > 0 && a + b > c && b + c > a && a + c > b)
        {
            if (a == b || b == c)
            {
                if (a == b && b == c)
                    outf << "E\n";
                else
                    outf << "I\n";
            }
            else
                outf << "S\n";
        }
        else
            outf << "Not triangle.\n";
    }
    cout<<"Success, please find the file named 'out11_lab4.txt'";
    inf.close();
    outf.close();
    return 0;
}