	#include <iostream>

	using namespace std;


	int main()
	{
		setlocale(0, "");
		float a, b, c, max;
		cout << "Введите 3 числа" << endl;
		/*a = 0.5;
		b = 0.4;
		c = 0.3;*/

		cin >> a >> b >> c;
		if (b < a && c < a) {
			max = a;
		}
		else if (c < b) {
			max = b; b = a;
		}
		else {
			max = c; c = a;
			
		}
		cout << "Максимальное число = " << max <<endl << "Два других = " << b << " и " << c <<endl;
		a = max;
		if (a >= b + c) {
			cout << "Треугольник не существует" <<endl;
			system("pause");
			return 0;
		}
		//cout << pow(a, 2)/1.0 << "\n" << pow(b, 2)/1.0 << "\n" << pow(c, 2)/1.0;
		//if (a*a - (b*b + c*c) == 0)
	    if ((a*a -  (b*b + c*c))  == 0)
			cout << "Треугольник прямоугольный";
		else
			if (a*a - (b*b + c*c) < 0) cout << "Треугольник остроугольный";
		else	
				if (a*a - (b*b + c*c) > 0) cout << "Треугольник тупой";
			if (a == b && b == c) cout << " равносторонний";
		else if (a != b && b != c && c != a) cout << " разносторонний";
		else cout << " равнобедренный";
		cout << endl;
		system("pause");
		return 0;
	} 