#include <stdio.h>

struct time {
	int hour;
	int minutes;
	int seconds;
}
struct time timeupdate(struct time now);

int main(void)
{
	struct time testTime[5] = {
		{11,59,59},
		{1,1,1},
		{2,2,2},
		{3,3,3},
		{4,4,4}
	};

	int i;

	for (int i = 0; i < 5; ++i)
	{
		printf("Time is %.2i:%.2i:%.2i\n", testTime[i].hour, testTime[i].minutes, testTime[i].seconds);
		testTime[i] = timeupdate(testTime[i]);

		printf("....one second later it's %.2i:%.2i:%.2i\n", testTime[i].hour, testTime[i].minutes, testTime[i].seconds);
		
		return 0;
	}
}

struct time timeupdate(struct time now)
{
	++now.seconds;
	if (now.seconds ==60)
	{
		now.seconds = 0;
	}
}
