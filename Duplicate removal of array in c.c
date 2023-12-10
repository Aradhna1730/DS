#include<stdio.h>
int duplicate(int a[],int n)
{
	int i,j,k;
	for(i=0;i<n;i++)
	{   
       for(j=i+1;j<n;)
       {
       	  if(a[i]==a[j])
       	  {
       	  	for(k=j;k<n;k++)
       	  	{
       	  		a[k]=a[k+1];
			}
			n--;
		  }
		  else
		  {
		  	j++;
		  }
	   }
	}
	return n;
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
	n=duplicate(arr,n);
	printf("\n array after removing duplicates:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}
