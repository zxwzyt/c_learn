#include <stdio.h>

struct point
{
	int x;
	int y;
};

// struct rect
// {
// 	struct point pt1;
// 	struct point pt2;
// };

// struct point makepoint(int x, int y)
// {
// 	struct point temp;
// 	temp.x = x;
// 	temp.y = y;
// 	return temp;
// }

// struct point addpoint(struct point p1, struct point p2)
// {
// 	p1.x += p2.x;
// 	p1.y += p2.y;
// }

// int ptinrect (struct point p, struct rect r)
// {
// 	return p.x >= r.pt1.x && p.x < r.pt2.x && p.y >= r.pt1.y && p.y < r.pt2.y;
// }


// //出现在点左边的一定是结构变量
// //结构可以做赋值运算，数组不可以
// //结构变量的名字并不是结构变量的地址，和普通变量相同，数组的名字就是数组的地址。
// //整个结构可以作为参数传入函数，这时候是在函数内新建一个结构变量，并复制调用者的结构的值
// //也可以返回结构
// struct key 
// {
// 	char *word;
// 	int count;
// } keytab = {
// 	"auto", 0,
// 	"break", 0,
// 	"void", 0,
// 	"case", 0,
// };

// struct point *getStruct(struct point *);
// void output(struct point);
// void print(const struct point *p);

int main()
{
	// struct rect screen;
	// struct point middle;
	// screen.pt1 = makepoint(0, 0);
	// screen.pt2 = makepoint(4, 6);
	// middle = makepoint((screen.pt1.x + screen.pt2.x)/2, (screen.pt1.y + screen.pt2.y)/2);
	
	// printf("%d %d\n", middle.x, middle.y);
	struct point y = {0, 0};
	//y = getStruct();不推荐这个方式

	struct point *p;
	p = getStruct(&y);
	output(y);
	output(*p);
	print(p);

	return 0;
}

/**
 * 不推荐这个方式
 */
// struct point getStruct(void)
// {
// 	struct point p;
// 	scanf("%d", &p.x);
// 	scanf("%d", &p.y);
// 	return p;
// }

/**
 * 推荐方式
 */

// struct point *getStruct(struct point *p)
// {
// 	scanf("%d", &p->x);
// 	scanf("%d", &p->y);

// 	return p;
// }

// void output(struct point p)
// {
// 	printf("%d %d\n", p.x, p.y);
// }

// void print(const struct point *p)
// {
// 	printf("%d %d\n", p->x, p->y);
// }
