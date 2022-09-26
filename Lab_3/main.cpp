#include <iostream>
#include <cmath>
using namespace std;
										//Даны три целых числа: A, B, C. Проверить истинность 
										//высказывания: «Каждое из чисел A, B, C положительное»
int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	cin >> a >> b >> c;
	cout << (a > 0) && (b > 0) && (c > 0);
	return 0;
}
