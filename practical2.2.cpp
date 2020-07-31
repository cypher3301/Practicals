/*Swapping of variables (Call by Refrence)*/

#include<stdio.h>
int swap(int *var1,int *var2);
main()
{
	int var1 = 10, var2 = 20;
	printf("Before : var1 = %d var2 = %d\n",var1,var2);
	swap(&var1,&var2);                         //Call by Reference
	printf("After : var1 = %d var2 = %d",var1,var2);
}
int swap (int *var1,int *var2)
{
	int var3;
	var3 = *var1;
	*var1 = *var2;
	*var2 = var3;
	return 0;
}

