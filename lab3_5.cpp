#include <iostream>
using namespace std;
int main()
{
    double vb, a, t;
    cout << "we have format : v = v0 + at \n";
    cout << "Enter v0 and a and t :";
    cin >> vb >> a >> t;
    cout << "v = " << vb + a * t;
    return 0;
}
