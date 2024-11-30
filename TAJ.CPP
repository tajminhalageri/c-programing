#include<stdio.h>
int main()
  {
	int num;
	printf("enter a number:");
	scanf("%d",&num);
	if(num > 0)
	{
		 printf("%d is positive");

	}
	else if(num<0)
	{
		printf("%d is negative\n");
	}
	else
	{
		printf("%d is zero");
	}
	return 0;
  }