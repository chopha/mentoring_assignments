#include <iostream>

class caculator {
private:
	int a_count;
	int s_count;
	int m_count;
	int d_count;
public:
	void addtion(float x, float y);
	void subtraction(float x, float y);
	void multiplication(float x, float y);
	void division(float x, float y);
	void total_count();
	void set_count();
};
void caculator::addtion(float x, float y)
{
	std::cout << x << " + " << y << " = " << x + y << std::endl;
	a_count++;
}
void caculator::subtraction(float x, float y)
{
	std::cout << x << " - " << y << " = " << x - y << std::endl;
	s_count++;
}
void caculator::multiplication(float x, float y)
{
	std::cout << x << " X " << y << " = " << x * y << std::endl;
	m_count++;
}
void caculator::division(float x, float y)
{
	std::cout << x << " / " << y << " = " << x / y << std::endl;
	d_count++;
}
void caculator::total_count()
{
	std::cout << "덧셈:" << a_count << " 뺄셈:" << s_count << " 곱셈:" << m_count << " 나눗셈:" << d_count << std::endl;
}
void caculator::set_count()
{
	a_count = 0;
	s_count = 0;
	m_count = 0;
	d_count = 0;
}
int main()
{
	caculator ca1;
	ca1.set_count();
	ca1.addtion(3.2,2.4);
	ca1.division(3.5, 1.7);
	ca1.subtraction(2.2, 1.5);
	ca1.division(4.9, 1.2);
	ca1.total_count();
}
