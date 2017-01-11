#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int i, n, d, pr, prx = 1, xs;
	cout << "Введите количество строк\n";
	cin >> n;
	cout << "Введите символ\n";
	char a;
	cin >> a;
	system("cls");

	xs = n;

	i = 1;
	d = 0;
	while (i <= xs)
	{
		pr = xs;
		while (pr > prx)
		{
			cout << " ";
			pr = pr - 1;
		}
		prx = prx + 1;
		while (d < i)
		{
			cout << a;
			d = d + 1;

		}

		cout << endl;
		d = 0;
		i = i + 1;
	}




	system("pause");
	return 0;
}