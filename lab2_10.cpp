#include <iostream>
using namespace std;
int main()
{
    int hour, minute;
    cout << "Enter Numbers of hour : ";
    cin >> hour;
    cout << "Enter Numbers of minute : ";
    cin >> minute;
    int ans = hour * 60 + minute;
    cout << "Answer : " << ans << endl;
    return 0;
}