#include <iostream> 
#include <iomanip> 
int main()
{
	float x = -360, y;
	while (x < 360)
	{
		y = ((sin(x * 3.14 / 90) * 80) / x * 20);
		std::cout << std::setw(40 + (y)) << std::setfill(' ') << '*' << "\n";
		x = x + 5;
		if (x == 0)
		{
			x = x + 10;
		}
		y++;
	}
	system("pause");
}