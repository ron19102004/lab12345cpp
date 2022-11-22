#include <iostream>
#include <fstream>
using namespace std;
int getProduct(int n)
{
    int product = 1;
    while (n)
    {
        product = product * (n % 10);
        n = n / 10;
    }
    return product;
}
int main()
{
    int n;
    ifstream inf;
    inf.open("in8_lab5.txt");
    ofstream outf;
    outf.open("out8_lab5.txt");
    while (inf >> n)
    {
        outf << getProduct(n) << "\n";
    }
    inf.close();
    outf.close();
    return 0;
}