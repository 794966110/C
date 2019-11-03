#include<stdio.h>
#include<string.h>



int main()
{
   char str1[]="nihao";
   char str2[]="???????";

   if(!strcmp(str2,str1))
   {
       printf("两个字符串一致");
   }
   else
   {
       printf("两个字符串存在差异");
   }


   return 0;
}
