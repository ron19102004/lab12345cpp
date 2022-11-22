#include <iostream>
using namespace std;
void drawLine(string text)
{
    for (int index = 0; index <= 50; index++)
    {
        (index == 25) ? cout << text : cout << "=";
    }
    cout << "\n";
}
int main()
{
    double examScore1, examScore2, examScore3, midtermExamScores, finalExamScores;
    drawLine("Diem kiem tra");
    cout << "Nhap diem kiem tra 1: ";
    cin >> examScore1;
    cout << "Nhap diem kiem tra 2: ";
    cin >> examScore2;
    cout << "Nhap diem kiem tra 3: ";
    cin >> examScore3;
    drawLine("Diem thi giua ky");
    cout << "Nhap diem thi giua ky: ";
    cin >> midtermExamScores;
    drawLine("Diem thi cuoi ky");
    cout << "Nhap diem thi cuoi ky: ";
    cin >> finalExamScores;
    drawLine("Tong ket");
    cout << "Tong diem kiem tra: " << examScore1 + examScore2 + examScore3 << endl;
    cout << "Diem thi giua ky: " << midtermExamScores << endl;
    cout << "Diem thi cuoi ky: " << finalExamScores << endl;
    return 0;
}