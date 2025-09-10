#include <iostream>
using namespace std;
int main() {
	int year, cyear = 2025;
	string name;
	cout << "Enter Your Name: " << endl;
	cin >> name;
	cout << "Enter Your Year of Birth: " << endl;
	cin >> year;
	cyear = cyear - year;
	cout << name << ", This year you will be " << cyear << " years old.";
}
