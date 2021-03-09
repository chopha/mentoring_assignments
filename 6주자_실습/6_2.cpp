#include <iostream>
#include <cstring>
using namespace std;

class printer {
private:
	char* ch;
	int size;

public:
	void SetString(const char* input);
	void ShowString();
};

void printer::SetString(const char* input)
{
	size = 0;
	while(*input != 0)
	{	
		input++;
		size++;
	}
	input -= size;
	ch = new char[size + 1];
	strcpy(ch, input);
}
void printer::ShowString()
{
	printf("%s", ch);
	printf("\n");
}
int main()
{
	printer pnt;
	pnt.SetString("hello world");
	pnt.ShowString();

	pnt.SetString("I Love c++");
	pnt.ShowString();

	return 0;
}
