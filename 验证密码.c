#include<stdio.h>

int main()
{
    int password=12345,i;

    do
    {   scanf("%d",&i);
        if(i!=password)
        {
        printf("try again");
        }
    }
    while(i!=password);


    printf("welcome");


   return 0;
}
