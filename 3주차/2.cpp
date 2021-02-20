#include <iostream>

int main()
{
	int number = 0;
	std::cout << "출력할 구구단 입력:";
	std::cin >> number;

	for (int i = 1; i < 10; i++)
	{
		std::cout << number << "*" << i << "=" << number * i << std::endl;
	}

}
