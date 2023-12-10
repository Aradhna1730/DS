#include<stdio.h>
#define n 5
void getdata(int arr[])
{
	int i;
	printf("\nenter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
}
void display(int arr[])
{
	int i;
	printf("\narray is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
}
void linear_search(int arr[],int a)
{
	int i,flag=0;
	for(i=0;i<n;i++)
	{
		if(arr[i]==a)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	printf("\nelement %d found at position %d and index %d",a,i+1,i);
    else
	printf("\nelement %d not found!!",a);
}
main()
{
	int val;
	int arr[n];
	getdata(arr);
	display(arr);
	printf("\nenter value to be searched:");
	scanf("%d",&val);
	linear_search(arr,val);
	return 0;
}
