#include<stdio.h>
void l_tri(int a[4][4])
{
	int i,j;
	printf("\nlower triangular matrix region:\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(i>=j)
			printf("%d\t",a[i][j]);
			else
			printf("0\t");
		}
		printf("\n");
	}
}
void r_tri(int a[4][4])
{
	int i,j;
	printf("\n upper triangular matrix region:\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(i<=j)
			printf("%d\t",a[i][j]);
			else
			printf("0\t");
		}
		printf("\n");
	}
}
main()
{
	int arr[4][4],i,j;
	printf("\nenter matrix elements:");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\nmatrix:\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	l_tri(arr);
	r_tri(arr);
    return 0;
}
