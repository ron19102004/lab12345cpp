#include <iostream>
using namespace std;
int main()
{
    double quiz, midTerm, finalScore;
    cout << "Enter quiz - mid_term - final scores :";
    cin >> quiz >> midTerm >> finalScore;
    if (quiz >= 0 && midTerm >= 0 && finalScore >= 0)
    {
        cout << "Student's grade is ";
        if ((0.2 * quiz + 0.3 * midTerm + 0.5 * finalScore) >= 8.5)
            cout << "A";
        else if ((0.2 * quiz + 0.3 * midTerm + 0.5 * finalScore) >= 7 && (0.2 * quiz + 0.3 * midTerm + 0.5 * finalScore) < 8.5)
            cout << "B";
        else if ((0.2 * quiz + 0.3 * midTerm + 0.5 * finalScore) >= 5.5 && (0.2 * quiz + 0.3 * midTerm + 0.5 * finalScore) < 7)
            cout << "C";
        else if ((0.2 * quiz + 0.3 * midTerm + 0.5 * finalScore) >= 4 && (0.2 * quiz + 0.3 * midTerm + 0.5 * finalScore) < 5.5)
            cout << "D";
        else
            cout << "F";
    } else cout<<"Error Invalid.";
    return 0;
}