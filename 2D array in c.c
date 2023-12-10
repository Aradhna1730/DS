#include<stdio.h>
main()
{
	int arr[10][10],i,j,m,n,base_adrs,radrs,cadrs,s1,s2;
	printf("enter matrix size:");
	scanf("%d %d",&m,&n);
	printf("\n enter base address:");
	scanf("%d",&base_adrs);
	printf("\nenter starting index for row and column:");
	scanf("%d %d",&s1,&s2);
	printf("\nenter matrix elements:");
	for(i=s1;i<m+s1;i++)
	{
		for(j=s2;j<n+s2;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\nenter pos for which address has to be calulated:");
	scanf("%d %d",&i,&j);
	radrs=base_adrs+((i-s1)*n+(j-s2))*sizeof(arr[s1][s2]);
	cadrs=base_adrs+((i-s1)+(j-s2)*m)*sizeof(arr[s1][s2]);
	printf("\n address of matrix position by row major:%d",radrs);
    printf("\n address of matrix position by column major:%d",cadrs);
	return 0;	
}
