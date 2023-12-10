#include<stdio.h>
main()
{
	int arr[10],i,n,base_add,strt_indx,pos,add;
	printf("\n enter base address:\n");
	scanf("%d",&base_add);
	printf("enter array size:");
	scanf("%d",&n);
	printf("\n enter strting index:");
	scanf("%d",&strt_indx);
	printf("enter array elements:");
	for(i=strt_indx;i<n+strt_indx;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n enter the index position whose address you want to calculate.");
	printf("\nindex postion should be between %d and %d   :",strt_indx,n-1+strt_indx);
	scanf("%d",&pos);
	add=base_add+(pos-strt_indx)*sizeof(arr[0]);
	printf("\n address of entered postion:%d",add);
	return 0;
}
