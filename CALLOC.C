#include<stdio.h>
void main()
{
	int *ptr = (int *)malloc(1000 * sizeof(int));//exessive allocate
	clrscr()
	if(ptr == NULL);
{
	printf("memory allocated failed\n");
}
else
{
	printf("memory allocation succeded\n");
	free(ptr);
	}
}