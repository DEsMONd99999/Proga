#include<iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int x, a, r;
	cout << "Что сделать:" << endl << "1. Поместить круг в квадрат" << endl << "2. Поместить квадрат в круг";
	cin >> x;
	cout << "Введите сторону квадрата" << endl;
	cin >> a;
	cout << "Введите радиус круга " << endl;
	cin >> r;
	if (x == 1) {
		if (a >= r*r) cout << "Круг поместится в квадрате";
		else  cout << "Круг не поместится в квадрате";
		cout << endl;
	}
	if (x == 2) {
		if ((((sqrt(2))*a)/2)<=r) cout << "Квадрат поместится в круге";
		else  cout << "Квадрат не поместится в круге";
		cout << endl;
	}	
	system("pause");
	return 0;
}