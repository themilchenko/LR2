#include <iostream>
#include <cmath>
int main()
{
	double eps = 0, arctan = 0, x = 0, a;
	int n, iterations;
	bool Error_Flag = true;
	while (Error_Flag)
	{
		std::cout << "Enter x (-1 < x <= 1): ";
		std::cin >> x;
		if ((x > -1) and (x <= 1))
			Error_Flag = false;
		else
			std::cout << "incorrect value, try again" << std::endl;
	}
	for (int i = -2; i > -7; i--)
	{
		eps = pow(10, i);
		n = 0;
		iterations = 0;
		a = 1;
		arctan = 0;
		while (fabs(a) > eps)
		{
			a = pow(-1, n) * pow(x, 2 * n + 1) / (2 * n + 1);
			arctan += a;
			n++;
			iterations++;
		}
		std::cout << "arctan = " << arctan << "with capacity of e = " << eps
			<< ", counted in " << iterations << " iterations" << std::endl;
	}
}
