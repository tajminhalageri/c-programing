#include<stdio.h>
int main()
{
	int arr1[2][2],arr2[2][2]product[2][2],i,j,k;
	clrscr();
		printf("enter the element of first matrix (2*2)\n: ");
		for(i = 0; i < 2 ; i++)
		{
			for(j = 0; j < 2 ; j++)
			{
			scanf("%d",&arr1[i][j]);

	}
	}
	for(i = 0; i < 2 ; i++)
	{
		for(j = 0 ; j < 2; j++)
		{
			scanf("%d",&arr2[i][j]);
			}
		}
		for(i = 0;i<2; i++)
		{
			for(j = 0; j< 2; j++)
			{
			for(K= 0; k < 2 ; k++)
				product[i][j] += arr[i][k] * arr2 [k][j];
				}
			}
		for( i = 0; i < 2; i++)
		{
		printf("%d",product[i][j]);
		return 0;
		}
		}