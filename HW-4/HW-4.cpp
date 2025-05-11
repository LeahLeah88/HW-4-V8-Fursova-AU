#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");

	int n;
	std::cout << "n = ";
	std::cin >> n;
	int number = 3;			//номер искомого элемента
	int element;			//искомый элемент
	int previos = -1;		//значение элемента b(n-2)
	std::cout << "1-й элемент = " << previos << std::endl;
	int last = 1;			//значение элемента b(n-1)
	std::cout << "2-й элемент = " << last << std::endl;

	while (n >= number)
	{
		element = 3 * last - 2 * previos;
		std::cout << "Элемент " << number << " последовательности = " << element << std::endl;
		number = number + 1;
		previos = last;
		last = element;
	}
}