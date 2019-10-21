#include<stdio.h>

void main()

{
	int a,b,max;
	printf("input two numbers:\n");
	scanf("%d%d",&a,&b);
	printf("max=%d",a>b?a:b);
} 



#include<stdio.h>

void main()

{
	char ch;
	scanf("%c",&ch);
	ch=(ch>='A'&&ch<='Z')?(ch+32):ch;
	printf("%c\n",ch);
} 
