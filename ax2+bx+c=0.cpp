//axx+bx+c=0
#include <iostream>
#include <clocale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	float a, b, c, x1, x2;
	cout << "Для уравнения axx+bx+c=0 введите a b c" << endl;
	cin >> a >> b >> c;
	x1 = (-b + sqrt(b * b - 4 * a * c)) / 2 * a;
	x2 = (-b - sqrt(b * b - 4 * a * c)) / 2 * a;
	cout << "X1="<< x1 <<endl <<"X2=" << x2<< endl;
	system("pause");
	return 0;


}






