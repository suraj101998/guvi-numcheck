#include<stdio.h>
int main()
{
	int start,end,num;
	scanf("%d",&num);
   scanf("\n%d %d",&start,&end);
   if(num>=start && num<=end)
   {
   	printf("yes");
   }
   else
   {
   	printf("no");
   }
   return 0;
} 
