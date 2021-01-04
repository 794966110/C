#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int magic;
	int guess;
	int count = 0;

	srand(time(NULL));
	magic = rand() % 100 + 1;

	do
	{
		printf("please input a num");
		scanf_s("%d",&guess);
		count++;
		if (magic > guess)
		{
			printf("too small\n");
		}
		else if (magic < guess)
		{
			printf("too big\n");
		}
		else
		{
			printf("right\n");
		}

	}while(magic != guess);
	printf("猜了%d次\n", count);
	system("pause");
	return 0;
}
