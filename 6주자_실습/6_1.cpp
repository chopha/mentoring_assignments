#include <iostream>

using namespace std;

typedef struct point {
	int xpos;
	int ypos;


void MovePos(int x, int y)
{
	xpos += x;
	ypos += y;
}
void Addpoint(const point& pos)
{
	xpos += pos.xpos;
	ypos += pos.ypos;
}
void showposition()
{
	printf("[%d, %d]\n", xpos, ypos);
}
}point;
int main()
{
	point pos1 = { 12,4 };
	point pos2 = { 20, 30 };

	pos1.MovePos(-7, 10);
	pos1.showposition();

	pos1.Addpoint(pos2);
	pos1.showposition();
	return 0;
}

