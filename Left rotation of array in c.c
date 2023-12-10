#include<stdio.h>
void l_rotate(int [],int);
void cl_rotate(int [],int);
main()
{
	int arr[10],i,n;
	printf("enter size of array:");
	scanf("%d",&n);
	printf("\n enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n original array:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	l_rotate(arr,n);
	cl_rotate(arr,n);
	return 0;
}
void l_rotate(int arr[],int n)
{
	int i,b[10];
	for(i=0;i<n-1;i++)
	{
		b[i]=arr[i+1];
	}
	b[n-1]=0;
	printf("\narray after left rotation:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",b[i]);
	}
}
void cl_rotate(int arr[],int n)
{
    int i,temp;
    temp=arr[0];
	for(i=0;i<n-1;i++)
	{
		arr[i]=arr[i+1];
	}
	arr[n-1]=temp;
	printf("\narray after left rotation:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
}
