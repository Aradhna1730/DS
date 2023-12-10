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
void sorting(int arr[])
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
int b_search(int  arr[],int strt,int end,int a)
{
	int mid;
	if(end>=strt)
	{
	mid=(strt+end)/2;
	if(arr[mid]==a)
	{
		return mid;
	}
	else if(arr[mid]<a)
	{
		return b_search(arr,mid+1,end,a);
	}
	else if(arr[mid]>a)
	{
		return b_search(arr,strt,mid-1,a);
	}
	}
	return -1;
}
main()
{
	int val,res;
	int arr[n];
	getdata(arr);
	printf("\nbefore sorting:");
	display(arr);
	sorting(arr);
	printf("\n----------------\nafter sorting:");
	display(arr);
	printf("\nenter value to be searched:");
	scanf("%d",&val);
	res=b_search(arr,0,n-1,val);
	if(res==-1)
	{
		printf("\nelement %d not found!!",val);
	}
	else
	{
		printf("\nelement %d found at position %d and index %d",val,res+1,res);
	}
	return 0;
}
