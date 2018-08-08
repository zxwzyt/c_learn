#include <stdio.h>

struct point
{
	int x;
	int y;
};

struct rect
{
	struct point pt1;
	struct point pt2;
};

struct point makepoint(int x, int y)
{
	struct point temp;
	temp.x = x;
	temp.y = y;
	return temp;
}

struct point addpoint(struct point p1, struct point p2)
{
	p1.x += p2.x;
	p1.y += p2.y;
}

int ptinrect (struct point p, struct rect r)
{
	return p.x >= r.pt1.x && p.x < r.pt2.x && p.y >= r.pt1.y && p.y < r.pt2.y;
}



struct key 
{
	char *word;
	int count;
} keytab = {
	"auto", 0,
	"break", 0,
	"void", 0,
	"case", 0,
};

int main()
{
	// struct rect screen;
	// struct point middle;
	// screen.pt1 = makepoint(0, 0);
	// screen.pt2 = makepoint(4, 6);
	// middle = makepoint((screen.pt1.x + screen.pt2.x)/2, (screen.pt1.y + screen.pt2.y)/2);
	
	// printf("%d %d\n", middle.x, middle.y);
	
	return 0;
}

