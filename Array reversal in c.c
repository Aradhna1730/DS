#include<stdio.h>
void interchange(int a[],int n)
{
	int i,temp,c;
	c=n/2;
	for(i=0;i<c;i++)
	{
		temp=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=temp;
	}
	printf("\n array after interchanging:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
main()
{
	int arr[10],i,n;
	printf("enter array size:");
	scanf("%d",&n);
	printf("\n enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\noriginal array:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	interchange(arr,n);
	return 0;
}
