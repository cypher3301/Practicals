/*Adding n numbers using dynamic memory allocation (DMA).(Using malloc() and free()).*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n, *ptr,i,sum = 0;
	
	printf("Enter the number of elements :");
	scanf("%d",&n);
	
	
	ptr = (int*)malloc(n*sizeof(int));
	
	for(i=0;i<n;i++)
	{
		printf("Enter the elements ");
		scanf("%d",ptr+i);
		sum += *(ptr + i);
	}
	free(ptr);
	printf(" Summation = %d",sum);
}
