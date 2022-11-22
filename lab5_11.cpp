#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;
string nameEnglish(char digits)
{
    switch (digits)
    {
    case '0':
        return "Zero";
        break;
    case '1':
        return "One";
        break;
    case '2':
        return "Two";
        break;
    case '3':
        return "Three";
        break;
    case '4':
        return "Four";
        break;
    case '5':
        return "Five";
        break;
    case '6':
        return "Six";
        break;
    case '7':
        return "Seven";
        break;
    case '8':
        return "Eight";
        break;
    case '9':
        return "Nine";
        break;
    }
}
int main()
{
    string num;
    ifstream inf;
    inf.open("in11_lab5.txt");
    ofstream outf;
    outf.open("out11_lab5.txt");
    while (inf >> num)
    {
        for (int i = 0; i < num.length(); i++)
        {
            outf << nameEnglish(num[i])<<" ";
        }
        outf << "\n";
    }
    cout << "Success!";
    inf.close();
    outf.close();
    return 0;
}