#include <iostream>
#include <math.h>
using namespace std;
void menu()
{
    cout << "*************************" << endl;
    cout << "*0 - Finish             *" << endl;
    cout << "*1 - Armstrong      \t*" << endl;
    cout << "*2 - Prime              *" << endl;
    cout << "*************************" << endl;
}
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
bool isPrime(int number)
{
    if (number < 2)
        return false;
    for (int i = 2; i < sqrt(number); i++)
    {
        if (!(number % i))
            return false;
    }
    return true;
}
int main()
{
    while (true)
    {
        menu();
        int select;
        cout << "Nhap lua chon cua ban : ";
        cin >> select;
        if (select == 0)
        {
            char r;
            cout << "Ban co chac muon thoat hay khong ? (c=co/k=khong) :";
            cin >> r;
            if (r == 'c' || r == 'C')
                break;
            else if (r == 'k' || r == 'K')
                continue;
        }
        switch (select)
        {
        case 1:
            int n;
            cout << "Nhap so n bat ki: ";
            cin >> n;
            if (Armstrong(n))
                cout << n << " la so Armstrong.\n";
            else
                cout << n << " khong la so Armstrong.\n";
            break;
        case 2:
            int m;
            cout << "Nhap so m bat ki :";
            cin >> m;
            if (isPrime(m))
                cout << m << " la so nguyen to.\n";
            else
                cout << m << " khong la so nguyen so.\n";
            break;
        default:
            cout << "Lua chon cua ban khong hop le.";
        }
    }
    system("pause");
    return 0;
}