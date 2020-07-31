/*Deleting an element from a given position in an array*/

#include<stdio.h>
int swap(int *a,int *b);
int main()
{
	int i,a[5],n;

	for(i=0;i<5;i++)
	{
		printf("arr[%d] :",i);
		scanf("%d",&a[i]);
	}

	printf("\narray = ");
	for(i=0;i<5;i++)
		printf("%d,",a[i]);

	printf("\n\nEnter the position :");
	scanf("%d",&n);
	for(i=n;i<5;i++)
		a[i-1] = a[i];

	printf("\nNew array with deleted element = ");

	for(i=0;i<4;i++)
		printf("%d,",a[i]);
	return 0;
}
int swap(int *a,int *b)
{
	int t;
	t = *a;
	*a=*b;
	*b=t;
	return 0;
}

