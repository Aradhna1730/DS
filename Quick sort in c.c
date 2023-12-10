#include<stdio.h>
#define n 5
int partition(int [],int,int);
void getdata(int arr[])
{
	int i;
	printf("\nenter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
}
void quicksort(int arr[],int p,int r)
{
	if(p<r)
	{
	int q=partition(arr,p,r);
	quicksort(arr,p,q-1);
	quicksort(arr,q+1,r);
       }
}
int partition(int arr[],int p,int r)
{
	int i;
	int m=p;
	for(i=p;i<r;i++)
	{
		if(arr[i]<=arr[r])
		{
			arr[i]=arr[m]+arr[i];
			arr[m]=arr[i]-arr[m];
			arr[i]=arr[i]-arr[m];
			m++;
		}
	}
	arr[r]=arr[m]+arr[r];
	arr[m]=arr[r]-arr[m];
	arr[r]=arr[r]-arr[m];
	return m;
}
void display(int arr[])
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr[n];
	getdata(arr);
	quicksort(arr,0,n-1);
	display(arr);
	return 0;
}
