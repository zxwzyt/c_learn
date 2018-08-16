#include <stdio.h>

int quantic1[6] = {1,0,-3,0,0,4}; //f(x) = 4x5 - 3x2 +1,数组表示

struct quantic
{
	int a;
	int i;
};

struct quantic p2[3] = {
	9, 12,
	15, 8,
	3, 2
};
struct quantic p1[4] = {
	26, 19,
	-4, 8,
	-13, 6,
	82,0
};

/**
 * 不正确
 * @return [description]
 */
int main()
{
	struct quantic p3[10];
	for (int i = 0; i < 10; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			if (p1[i].i > p2[j].i)
			{
				p3[i].i = p2[j].i;
				p3[i].a = p2[j].a;
				break;
			}
			else if (p1[i].i = p2[j].i)
			{
				p3[i].i = p2[j].i;
				p3[i].a = p2[j].a + p1[i].a;
				break;
			}
			else
			{
				p3[i].i = p1[i].i;
				p3[i].a = p1[i].a;
			}
		}
	}

	return 1;
}