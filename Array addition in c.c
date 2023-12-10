#include<stdio.h>
main()
{
	int ar[10][10],i,j,m,n,sum=0;
	printf("enter array size:");
	scanf("%d %d",&m,&n);
	printf("\nenter array elements:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&ar[i][j]);
			sum+=ar[i][j];
		}
	}
	printf("\n sum of all array elements :%d",sum);
	return 0;
}
