#include <iostream>// подключает ввод и вывод
#include <iomanip>
#include <cmath>
using namespace std;
int main() { //ввод в программу
	const double pi = acos(-1.0); //константа с плавабщей точкой double - тип дан.
	double radius;
	double area;
	double circumference;
	cin >> radius;// ожидает ввод числа в консоли
	area = pi * radius * radius;
	circumference = 2.0 * pi * radius;
	cout << fixed << setprecision(6)
		<< area << "" << circumference << "\n";
	return 0;
	
}