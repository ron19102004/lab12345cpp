#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;
bool isNumber(string str)
{
    if (str.length() == 0)
        return false;
    if (str[0] == 0)
        return false;
    for (int lenCurrent = 0; lenCurrent < str.length(); lenCurrent++)
    {
        if (str[lenCurrent] < '0' || str[lenCurrent] > '9')
            return false;
    }
    return true;
}
int main()
{
    ifstream inf;
    inf.open("in10_lab5.txt");
    string number;
    ofstream outf;
    outf.open("out10_lab5.txt");
    while (inf >> number)
    {
        int first = 0, last = number.length() - 1;
        bool result = true;
        if (isNumber(number))
        {
            while (first < last)
            {
                if (number[first] != number[last]){
                        result = false;
                        break;
                } else {
                    first++;
                    last--;
                }
            }
            if(result) outf<<number<<" is a paralindrome number.\n";
            else outf<<number<<" is not a paralindrome number.\n";
        }
        else
            outf << "Sai dinh dang dua vao.";
    }
    cout<<"Success!";
    inf.close();
    outf.close();
    return 0;
}