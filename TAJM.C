#include<stdio.h>
int main()
{
	int i,num, isPrime=1;
	printf("enter a number\n");
	scanf("%d\n",&num);
	for(i=2 ;i<=num/2 ; i++)
	{
		if(num % i == 0)
		{
		isPrime = 0;
		break;
		}
       }
       if(isPrime && num > 1)
		{
		printf("%d is a prime number\n",num);
		}
		else

		{
		printf("%d is not is prime number\n",num);
		}
		return 0;
       }
