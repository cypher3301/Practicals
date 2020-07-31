/*Give n number of shifts to the elements of an array in rotation*/

#include<stdio.h>
int main(){
	int var1[5] = {1,2,3,4,5},a,b;

	//Before
	printf("Array before shifts :");
	for(b=0;b<5;b++)
		printf("%d,",var1[b]);

	//Shifts
	printf("\n\nEnter the number of shifts : ");
	scanf("%d",&a);

	//After
	printf("\nArray after %d shifts :",a);
	for(b=(a>5) ? 5-(a%5) : 5-a;b<5;b++)
		printf("%d,",var1[b]);
	for(b=0;b<5-((a>5) ? (a%5) : a);b++)
		printf("%d,",var1[b]);
}
