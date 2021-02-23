#include <stdio.h>
int main()
{
	int age;
	int year = 2021;
	printf("당신의 나이를 입력하세요: ");
	scanf("%d", &age);
	year = year - (age-1);
	printf("당신은 %d년도에 태어났습니다.\n", year);
	return 0;
}


