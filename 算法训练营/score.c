#include <stdio.h>

int score[5005][4];

int nixu = 0;

void push(int num, int al, int st)
{
	score[num][0] = al;
	score[num][1] = st;
    score[num][2] = al + st;
    score[num][3] = num;
}

void sort(int length)
{	
    int tmp[4];

	for (int i = 1; i < length; ++i)
	{   
        for (int j = i+1; j <= length; ++j)
        {
            if ((score[i][2] < score[j][2]) || (score[i][2] == score[j][2] && score[i][0] < score[j][0]))
            {
                tmp[0] = score[j][0];
                tmp[1] = score[j][1];
                tmp[2] = score[j][2];
                tmp[3] = score[j][3];

                score[j][0] = score[i][0];
                score[j][1] = score[i][1];
                score[j][2] = score[i][2];
                score[j][3] = score[i][3];

                score[i][0] = tmp[0];
                score[i][1] = tmp[1];
                score[i][2] = tmp[2];
                score[i][3] = tmp[3];
            }
        }
	}

    for (int i = 1; i <= length; ++i)
    {
        printf("%d %d %d %d\n", score[i][3], score[i][2], score[i][0], score[i][1]);

        for (int j = i+1; j <= length; ++j)
        {
            if (score[i][3] > score[j][3])
            {
                nixu++;
            }
        }
    }

    printf("%d\n", nixu);
}

int main()
{
	int n;
    scanf("%d", &n);
    int al;
    int st;

   	for (int i = 1; i <= n; ++i)
   	{
    	scanf("%d %d", &al, &st);
    	push(i, al, st);
    }

    //排序
    sort(n);

    return 0;
}