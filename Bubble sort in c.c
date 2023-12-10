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
void bubble(int arr[])
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
void display(int arr[])
{
	int i;
	printf("\narray is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
}
main()
{
	
	int arr[n];
	getdata(arr);
	display(arr);
	printf("\n-----------------------------------\nafter bubble sorting:");
	bubble(arr);
	display(arr);
	return 0;
}
