#include <iostream>

int Calculate (int n)
{
	if (n == 1) return -1;
	if (n == 2) return 1;
	return 3 * Calculate (n - 1) - 2 * Calculate (n - 2);
}

int main()
{
	int n;
	std::cout << "n = ";
	std::cin >> n;
	std::cout << Calculate (n);
}

