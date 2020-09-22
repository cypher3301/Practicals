#include <stdio.h>
 
int main ()
{
    int arr[20][20];
    int m, n;
    int count=0;
 
    printf("Enter the order of the matrix : ");
    scanf("%d %d", &m, &n);
    printf("Enter the values of the matrix: \n");
    for (int i=0;i<m;i++)
        for (int j=0;j<n;j++)
        {
            scanf("%d", &arr[i][j]);
            if (arr[i][j]!=0)
                count++;
        }
    printf("----------Triplet----------\n");
    printf("%d\t%d\t%d\n",m,n,count);
    for (int i=0; i<m;i++)
		for(int j=0; j<n; j++)
			if(arr[i][j]!= 0)
				printf("%d\t%d\t%d\n",i,j,arr[i][j]);

    int arr2[20][20];
    count = 0;
    printf("Enter the order of the matrix :");
    scanf("%d %d", &m, &n);
    printf("Enter the values of the matrix :\n");
    for (int i=0;i<m;i++)
        for (int j=0;j<n;j++)
        {
            scanf("%d", &arr2[i][j]);
            if (arr2[i][j]!=0)
                count++;
        }

    printf("----------Triplet----------\n");
	printf("%d\t%d\t%d\n",m,n,count);
    for (int i=0; i<m;i++)
		for(int j=0; j<n; j++)
			if(arr2[i][j]!= 0)
				printf("%d\t%d\t%d\n",i,j,arr2[i][j]);
    int arr3[20][20];
    printf("----------Additon of Triplet----------\n");
    count = 0;
    for(int i=0; i<m;i++)
    {
    	for(int j=0; j<n; j++)
    		arr3[i][j] = arr[i][j]+arr2[i][j];
	}
	for(int i=0; i<m;i++)
    	for(int j=0; j<n; j++)
    		if(arr3[i][j]!= 0)
    			count++;
	printf("%d\t%d\t%d\n",m,n,count);
	for (int i=0; i<m;i++)
		for(int j=0; j<n; j++)
			if(arr3[i][j]!= 0)
				printf("%d\t%d\t%d\n",i,j,arr3[i][j]);
	

}

