/*Sorting of an array in ascending order.*/

#include<stdio.h>
int swap(int *var1,int *var2);
int main()
{
	int var1[10] = {8,3,6,2,1,5,7,9,10,12};
	for(int i=0;i<10;i++)
	{
	 	for(int j=i+1;j<10;j++)
		{
	 		if(var1[i]>var1[j])
	 			swap(&var1[i],&var1[j]);
		}
	}
	for(int i=0;i<10;i++)
		printf("%d,",var1[i]);
}
int swap (int *var1,int *var2)
{
	int var3;
	var3 = *var1;
	*var1 = *var2;
	*var2 = var3;
	return 0;
}
