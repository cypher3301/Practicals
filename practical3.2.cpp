/*Inserting an element at a given position in an array.*/

#include<stdio.h>
int swap (int *var1,int *var2);
int main()
{
	int var1[5] = {4,6,5,2},a,b,c;
	for(c=0;c<5;c++)
		printf("%d,",var1[c]);
	printf("\nEnter the position :");
	scanf("%d",&a);
	printf("Enter the number");
	scanf("%d",&b);
	for(c=5;c>=a;c--)
		swap(&var1[c],&var1[c-1]);
	var1[c] = b;
	for(c=0;c<5;c++)
		printf("%d,",var1[c]);
	return 0;
}
int swap (int *var1,int *var2)
{
	int var3;
	var3 = *var1;
	*var1 = *var2;
	*var2 = var3;
	return 0;
}


