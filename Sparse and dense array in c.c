#include<stdio.h>
#include<math.h>
main()
{
	int arr[10][10],m,n,i,j,count=0;
	printf("enter matrix size:");
	printf("\nrow:");
	scanf("%d",&m);
	printf("\ncolumn:");
	scanf("%d",&n);
	printf("\nenter matrix elements:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
			while(arr[i][j]<0)
			{
				printf("\nenter value again:");
				scanf("%d",&arr[i][j]);
			}
			if(arr[i][j]>0)
			count++;
		}
	}
	printf("\nmatrix elements are:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	if(count<ceil((m*n)/2))
	printf("\ngiven matrix is sparse matrix.");
	else
	printf("\ngiven matrix is dense matrix.");
	return 0;
}
