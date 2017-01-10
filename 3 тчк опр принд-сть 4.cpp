#include <iostream>
const float EPS = 0.000001;
using namespace std;

int main()
{
	setlocale(0, "");
	float ax, ay, bx, by, cx, cy, dx, dy, a, b, c, a1, b1, c1, s1, sm1, sm2, sm3;

	cout << "Введите x и y для первой точки " << endl;
	cin >> ax >> ay;
	cout << "Введите x и y для второй точки " << endl;
	cin >> bx >> by;
	cout << "Введите x и y для третьей точки " << endl;
	cin >> cx >> cy;
	cout << "Введите x и y для третьей точки " << endl;
	cin >> dx >> dy;
	a = sqrt((ax - bx)*(ax - bx) + ((ay - by)*(ay - by)));
	b = sqrt((ax - cx)*(ax - cx) + ((ay - cy)*(ay - cy)));
	c = sqrt((cx - bx)*(cx - bx) + ((cy - by)*(cy - by)));
	s1 = sqrt(((a + b + c) / 2)*(((a + b + c) / 2) - a)*(((a + b + c) / 2) - b)*(((a + b + c) / 2) - c));
	a1 = sqrt((ax - dx)*(ax - dx) + ((ay - dy)*(ay - dy)));
	b1 = sqrt((bx - dx)*(bx - dx) + ((by - dy)*(by - dy)));
	c1 = sqrt((cx - dx)*(cx - dx) + ((cy - dy)*(cy - dy)));
	cout << endl << a1 << endl << b1 << endl << c1 << endl;
	sm1 = sqrt(((a1 + b + c1) / 2)*(((a1 + b + c1) / 2) - a1)*(((a1 + b + c1) / 2) - b)*(((a1 + b + c1) / 2) - c1));
	sm2 = sqrt(((a1 + b1 + a) / 2)*(((a1 + b1 + a) / 2) - a1)*(((a1 + b1 + a) / 2) - b1)*(((a1 + b1 + a) / 2) - a));
	sm3 = sqrt(((c + b1 + c1) / 2)*(((c + b1 + c1) / 2) - c)*(((c + b1 + c1) / 2) - b1)*(((c + b1 + c1) / 2) - c1));
	
	int s2 = sm1 + sm2 + sm3 + .5;
	if (abs(s1 - s2)<EPS) cout << "Точка внутри треугольника" << endl;
	else cout << "Точка снаружи треугольника" << endl;
	system("pause");
	return 0;	
}