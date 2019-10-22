#include<stdio.h>

void main()

{
	double a,b;

	char c;
	printf("input expression:a+(-,*,/)b\n");
	scanf("%lf%c%lf",&a,&c,&b);
	switch(c)
	{
	case'+':printf("%lf\n",a+b);break;
	case'-':printf("%lf\n",a-b);break;
	case'*':printf("%lf\n",a*b);break;
	case'/':printf("%lf\n",a/b);break;
	default:printf("error");


	}
}
