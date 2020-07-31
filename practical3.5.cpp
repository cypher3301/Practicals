/*Deleting an element by its value from a given array*/

#include<stdio.h>
int swap(int *a,int *b);
int main()
{
	int i,a[5],n,v;

	for(i=0;i<5;i++)
	{
		printf("arr[%d] :",i);
		scanf("%d",&a[i]);
	}

	printf("\narray = ");
	for(i=0;i<5;i++)
		printf("%d,",a[i]);

	printf("\n\nEnter the value :");
	scanf("%d",&v);
	for(i=0;i<5;i++)
		if(a[i] == v)
			n = i;
	for(i=n;i<5;i++)
		a[i] = a[i+1];
	printf("\nNew array with deleted value = ");
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
