#include<stdio.h>
void sorting(int a[10][10],int m,int n)
{
	int i,j,k,temp;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n-1;j++)
		{
		    for(k=0;k<n-j-1;k++)
		    {
		    	if(a[i][k]>a[i][k+1])
		    	{
		    		temp=a[i][k];
		    		a[i][k]=a[i][k+1];
		    		a[i][k+1]=temp;
				}
			}
		}
	}
}
main()
{
	int arr[10][10],i,j,m,n;
	float md;
	printf("enter array size:");
	scanf("%d %d",&m,&n);
		printf("\nenter array elements:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
    sorting(arr,m,n);
   	printf("\nafter sorting:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
    }
    for(i=0;i<m;i++)
    {  
       if(n%2==0)
       {
       	md=(float)(arr[i][(n/2)-1]+arr[i][((n+2)/2)-1])/2;
	   }
	   else
	   {
	   	md=(float)arr[i][((n+1)/2)-1];
	   }
	   printf("\nmedian is:%f\n",md);
	}

	return 0;
}

