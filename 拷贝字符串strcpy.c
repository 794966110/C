#include<stdio.h>
#include<string.h>



int main()
{
   char str1[]="Original String";
   char str2[]="New String";
   char str3[100];

   strcpy(str1,str2);
   strcpy(str3,"copy sucessflly");
   printf("str1:%s\n",str1);
   printf("str2:%s\n",str2);
   printf("str3:%s\n",str3);


   return 0;
}




#include<stdio.h>
#include<string.h>



int main()
{
   char str1[]="To be or not to be";
   char str2[40];

   strcpy(str2,str1);
   str2[5]='\0';
   printf("%s",str2);


   return 0;
}
