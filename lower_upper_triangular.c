#include<stdio.h>
void l_tri(int a[10][10],int m,int n)
{
	int i,j;
	printf("\nlower triangular array:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i>=j)
			printf("%d\t",a[i][j]);
			else
			printf("0\t");
		}
		printf("\n");
	}
}
void r_tri(int a[10][10],int m,int n)
{
	int i,j;
	printf("\n upper triangular array:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
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
	int arr[10][10],i,j,m,n;
	printf("enter array size:");
	scanf("%d %d",&m,&n);
	if(m==n)
	{
	printf("\nenter array elements:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\narray:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	l_tri(arr,m,n);
	r_tri(arr,m,n);
    }
    else
    printf("\n it is not a square matrix!!");
}
