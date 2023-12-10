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
void selection(int arr[])
{
	  int i,j,min;  
      
    for(i=0;i<n-1;i++)
    {  
        min=i;  
        for(j=i+1;j<n;j++)  
        {
		    if(arr[j]<arr[min])  
            {
			   min=j;  
		    }
		}
    int temp=arr[min];  
    arr[min]=arr[i];  
    arr[i]=temp;
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
	printf("\n----------------------------------\nafter selection sorting:");
	selection(arr);
	display(arr);
	return 0;
}
