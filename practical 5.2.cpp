/*Adding n numbers using dynamic memory allocation (DMA).(Using calloc() and free()).*/

#include<stdio.h>
#include<stdlib.h>
int main()
void printline(char ch,int len);
{
	int n, *ptr,i,sum = 0;
	printline('*',52);
	printf("Enter the number of elements :");
	scanf("%d",&n);
	
	//Allocating memory
	ptr = (int*)calloc(n,sizeof(int));
	printline('>',52);
	for(i=0;i<n;i++)
	{
		printf("Enter the elements: ");
		scanf("%d",ptr+i);
		sum += *(ptr + i);
	}
	free(ptr);
	printf("Summation = %d",sum);
	printline('>',52);
}
int printline(char ch,int len)
{
	int i;
	for(i=0;i<len;++)
	{
		printf("%c",ch);
	}
	printf("\n");
}

