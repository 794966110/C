#include<stdio.h>
#include<string.h>


#define NUM 10
int main()
{
   char str1[]="I love";
   char str2[]="fishc.com";

   strcat(str1," ");
   strcat(str1,str2);

   printf("%s",str1);
   return 0;
}
