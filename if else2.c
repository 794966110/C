#include<stdio.h>


void main()


{
	int score;
	printf("input a score:\n");
	scanf("%d",&score);
	if(score<60)
	{
		printf("E\n");
	}
	 else if(score>=60&&score<70)
	{
		printf("D\n");
	}
	 else if(score>=75&&score<80)
	{
		printf("C\n");
	}
	else if(score>=80&&score<90)
	{
		printf("B\n");
	}
	else if(score>=90)
	{
		printf("A\n");
	}

}
