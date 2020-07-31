/*Search an element from an array(Linear Search)*/

#include<stdio.h>
int main()
{
	int var1[20],a,b;
	for(int c=0;c<5;c++)
	{
		printf("Enter the value  :");
		scanf("%d",&var1[c]);
	}
	printf("Enter the value to be checked :");
	scanf("%d",&b);
	for(int c=0;c<5;c++)
	{
		if(var1[c] == b)
		{
			printf("%d is present in the array.",b);
			break;
		}
		else if (c==4 && var1[c] != b)
			printf("Entered value is not present in the array");
	}
}


