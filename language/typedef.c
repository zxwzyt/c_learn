#include <stdio.h>

//生命新的类型的名字
//新的名字是某种类型的别名
//改善程序的可读性 typedef int int_64;

// typedef struct node {
// 	int x;
// 	int y;
// } aNode;


// //union
// union AnElt
// {
// 	int i;
// 	char c;
// } elt1, elt2;

// elt1.i = 4;
// elt2.c = 'c';
// elt2.i = 0xE82983;

typedef union {
	int i;
	char ch[sizeof(int)];
} CHI;

int main()
{	
	CHI chi;
	int i;
	chi.i = 1234;
	for (int i = 0; i < sizeof(int); ++i)
	{
		printf("%02hhX\n", chi.ch[i]);
	}
	return 0;
}
