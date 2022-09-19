#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	cin >> a >> b >> c;
	if ((a > 0) && (b > 0) && (c > 0)) {
		cout << "¬се числа положительные";
	}
	else {
		cout << "ќдно или несколько чисел оказались не положительными";
	}
	return 0;
}