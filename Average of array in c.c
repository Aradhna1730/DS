#include<stdio.h>
main()
{
	int ar[10][10],i,j,m,n,sum=0;
	float aver;
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
	aver=(float)sum/(m*n);
	printf("\n average of all array elements :%f",aver);
	return 0;
}
