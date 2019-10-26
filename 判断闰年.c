#include<stdio.h>

void main()

{
	int a;
	printf("please input a year to analyze:\n");
	scanf("%d",&a);
	if(a%4==0&&a%100!=0||a%400==0)
	{
	
		printf("%d是闰年\n"，a);

	}
	
	
	else  
	{
		printf("%d不是闰年\n");
	}
}






#include<stdio.h>

void main()

{
	int year,leap;
	scanf("%d",&year);
	if (year%4==0)
	{
		if(year%100==0)
		{
			leap=0;

		}
		else
		{
			leap=1;
		}
	}
	
	else 
	{
		leap=0;
	}
	if(1==leap)
	{
		printf("%d is",year);
	}
	else
	{
		printf("%d is not",year);
	}
	
	printf(" a leap year\n");


}
