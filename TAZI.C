#include<stdio.h>
#define M 3
#define N 3

	//these M and N can also be delare as macros
	void print(int arr[M][N])
	{
	   int i,j;
	   for(i = 0; i < M; i++){
		for(j = 0; j < N; j++)
		printf("%d",arr[i][j]);
		printf("\n");
		}
	}
int main()
{
	//initialisation of array
	int arr[][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
		};
	 clrscr();
	 //call the function by passing an array
	 print(arr);
	 return 0;
	 }

