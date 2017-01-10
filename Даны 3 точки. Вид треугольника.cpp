#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	float ax, ay, bx, by, cx, cy, a , b , c ;
	cout << "Введите x и y для первой точки " << endl;
	cin >> ax >> ay;
	cout << "Введите x и y для второй точки " << endl;
	cin >> bx >> by;
	cout << "Введите x и y для третьей точки " << endl;
	cin >> cx >> cy;
	a = sqrt(abs(ax - bx)*abs(ax - bx) + (abs(ay - by)*abs(ay - by)));
	b = sqrt(abs(ax - cx)*abs(ax - cx) + (abs(ay - cy)*abs(ay - cy)));
	c = sqrt(abs(cx - bx)*abs(cx - bx) + (abs(cy - by)*abs(cy - by)));
	//cout << a << b << c <<endl;
	if (b < a && c < a) {
	 	ax = a;
	}
	else if (c < b) {
		ax = b; b = a;
	}
	else {
		ax = c; c = a;

	}
	if (ax >= b + c) {
		cout << "Треугольник не существует" << endl;
		system("pause");
		return 0;
	}
	if (ax*ax - (b*b + c*c) == 0)
		cout << "Треугольник прямоугольный";
	else
		if (ax*ax - (b*b + c*c) < 0) cout << "Треугольник остроугольный";
		else
			if (ax*ax - (b*b + c*c) > 0) cout << "Треугольник тупой";
	if (ax == b && b == c) cout << " равносторонний";
	else if (ax != b && b != c && c != ax) cout << " разносторонний";
	else cout << " равнобедренный";
	cout << endl;
	cout << "Тангенс первого угла" << 
	system("pause");

	return 0;
}
