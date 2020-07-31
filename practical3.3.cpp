/*Inserting an element at an appropriate position in an array that is already
sorted in an ascending order*/

#include<stdio.h>
int swap(int *var1,int *var2);
int main()
{
	int var1[11],a,b,c;
	for(b=0;b<10;b++)
	{
		printf("arr[%d] :",b);
		scanf("%d",&var1[b]);
	}
	printf("Enter the value you want to insert :");
	scanf("%d",&a);
	var1[b] = a;
	for(b=0;b<11;b++)
		for(c=b+1;c<11;c++)
			if(var1[b]>var1[c])
				swap(&var1[b],&var1[c]);

	for(b=0;b<11;b++)
		printf("arr[%d] : %d\n",b,var1[b]);
	return 0;
}
int swap(int *var1,int *var2)
{
	int var3;
	var3 = *var1;
	*var1=*var2;
	*var2=var3;
	return 0;
}

