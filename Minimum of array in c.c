#include<stdio.h>
main()
{
	int ar[10][10],i,j,m,n,min;
	printf("enter array size:");
	scanf("%d %d",&m,&n);
	printf("\nenter array elements:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&ar[i][j]);
		}
	}
	min=ar[0][0];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(min>ar[i][j])
			min=ar[i][j];
		}
	}
	printf("\n the minimum element of te array is:%d",min);
	return 0;
}
