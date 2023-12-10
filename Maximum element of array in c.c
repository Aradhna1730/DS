#include<stdio.h>
main()
{
		int ar[10][10],i,j,m,n,max;
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
	max=ar[0][0];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(max<ar[i][j])
			max=ar[i][j];
		}
	}
	printf("\n the greatest element of te array is:%d",max);
	return 0;
}
