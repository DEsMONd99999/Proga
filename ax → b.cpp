#include <iostream>
#include <clocale>
using namespace std;	
int main()
{
	setlocale(LC_ALL, "Russian");
	float a, b;
	cout << "��� ���������� ax>b ������� a � b" << endl;
	cin >> a >> b;
	a = b / a;
	cout << "x>" << a << endl;
	system("pause");
	return 0;
}