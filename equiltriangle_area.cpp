//Triangle Area
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int side;
	cout << "Enter Sides: ";
	cin >> side;
	float area = (sqrt(3)/4) * side * side;
	cout << "Area is: " << area;
}
