#include <stdio.h>

//1.1 1.2
// void hello()
// {
// 	printf("hello WORLD\07\n");
// 	printf("hello WORLD\?\n");
// }

//1.3
// void temprature()
// {
// 	printf("摄氏转换表\n");
// 	printf("华氏度 摄氏度\n");
// 	for (float i = 0.0; i <= 300; i+=20)
// 	{
// 		printf("%4.2f %4.2f\n", i, (5.0/9.0) * (i - 32));
// 	}
// }

// 1.5
// void temprature()
// {
// 	for (int i = 300; i >= 0; i-=20)
// 	{
// 		printf("%4d %4.2f\n", i, (5.0/9.0) * (i - 32));
// 	}
// }

// 1-6 1-7
// void getchars()
// {
// 	int c;
// 	while ((c = getchar()) != EOF)
// 		// putchar(c);
// 		printf("%d\n", c);
// 	printf("EOF is %d\n", EOF);
// }

// 1-8
// int count()
// {
// 	int i = 0;
// 	int c;
// 	while ((c = getchar()) != '1')
// 	{
// 		i++;
// 		printf("%d\n", c);
// 	}
		
// 	printf("EOF is %d\n", EOF);
// 	printf("%d\n", i);

// 	return 1;
// }

// void count()
// {
// 	int n_blank = 0;
// 	int n_tab = 0;
// 	int n_line = 0;
// 	int c;
// 	while ((c = getchar()) != 'n')
// 	{
// 		if (c == ' ')
// 			n_blank++;
// 		if (c == '\t')
// 			n_tab++;
// 		if (c == '\n')
// 			n_line++;
// 	}

// 	printf("%d %d %d\n", n_blank, n_tab, n_line);
// }

int main()
{
	count();
	return 0;
}