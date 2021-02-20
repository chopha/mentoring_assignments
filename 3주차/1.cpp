#include <iostream>

int main()
{
	
	int array[5] = { 0 };
	int total = 0;
	for (int i = 0; i < 5; i++)
	{
		std::cout << i+1 << "번쨰 정수 입력:";
		std::cin >> array[i];
		total += array[i];
	}
	std::cout << "합계:" << total << std::endl;
}
