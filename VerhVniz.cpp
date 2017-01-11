#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	int i=1, n, d=1, x, z=1;
	cin >> n;
	x = 2;
	system("cls");
	while (i <= n)
	{
		while (d < x)
		{
			cout << "*";
			d = d + 1;

		}
		cout << endl;
		z = z - 1;
		d = z;
		i = i + 1;
	}
		
	//while (i <= n)
		//{
	//	while (d < x)  
	//	{ 
	//		cout << "*";
	//		d = d + 1;

	//	} 
	//	cout << endl;
	//	d = 0;
	//	x = x - 1;
	//	i = i + 1;
	//}
	system("pause");
	return 0;
}