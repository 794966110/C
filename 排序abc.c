#include<stdio.h>

void main()

{
	int a,b,c,t1,t2;
	printf("input a,b,c,number:\n");
	scanf("%d%d%d",&a,&b,&c);
	if (a<b)
	{
		t1=a,a=b,b=t1;
		}
	if (b<c)
	{
		t2=b,b=c,c=t2;}
	
	printf("%d%d%d",a,b,c);
	
} 
