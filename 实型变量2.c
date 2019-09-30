#include<stdio.h>

void main()
{
char a,b;
a=120；
b=121;
printf("%c,%c\n",a,b);
printf("%d,%d\n",a,b);
}


x,y
120,121




#include<stdio.h>

void main()
{
char x,y;
x='a';
y='b';
x=x-32;
y=y-32;
printf("%c,%c\n%d,%d\n",x,y,x,y);
}


A,B
65,66




char是int的一个特殊情况,char占8位
字符常量''，占一字节
字符串常量""，等于字节数加1，增加的是\0,这是字符串结束的标志
