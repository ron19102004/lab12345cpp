#include <iostream>
using namespace std;
int main () {
	cout << "Tax : " << 88.67 * 0.0675 << endl;		
	cout << "Tip : " << 0.2 * (88.67 + 88.67 * 0.0675) << endl;		
	cout << "Total Cost : " << 88.67 + 88.67 * 0.0675 + 0.2 * (88.67 + 88.67 * 0.0675) << endl;// tính và xuất kết quả
	return 0;
}