#include <iostream>

int main()
{
	int number = 0;
	std::cout << "����� ������ �Է�:";
	std::cin >> number;

	for (int i = 1; i < 10; i++)
	{
		std::cout << number << "*" << i << "=" << number * i << std::endl;
	}

}