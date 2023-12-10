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
void insertion(int arr[])
{
	int i,temp,j; 
    for (i=1;i<n;i++) 
	{
	    temp=arr[i];
	    j=i-1;
	    while(j>=0 && (arr[j]>temp))
	    { 
            arr[j+1]=arr[j]; 
            j=j-1; 
        } 
        arr[j+1]=temp;
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
	printf("\n--------------------------------\nafter insertion sorting:");
	insertion(arr);
	display(arr);
	return 0;
}
