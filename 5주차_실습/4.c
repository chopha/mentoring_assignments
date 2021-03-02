#include <stdio.h>
struct info {
	char name[20];
	double score;
	int creadit;
};
void input_data(struct info *students, int i)
{
	
	for (int n = 0; n < i; n++)
	{
		printf("이름: ");
		scanf("%s", &students[n].name);
		printf("평점 평균: ");
		scanf("%lf", &students[n].score);
		printf("취득 학점: ");
		scanf("%d", &students[n].creadit);
		printf("---------\n");
	}
	
}
void scholarship(struct info* students, int i)
{

	printf("장학생 명단\n");

	for (int n = 0; n < i; n++)
	{
		if (students[n].score >= 4.3)
		{
			if (students[n].creadit >= 20)
			{
				printf("이름: %s |평점 평균: %0.1lf |취득 학점: %d\n", students[n].name, students[n].score, students[n].creadit);
			}
		}
	}
}
int main()
{
	struct info students[5];
	input_data(students, 5);
	scholarship(students, 5);
	return 0;
}
