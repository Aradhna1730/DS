#include<stdio.h>
void m_array(int a[10][10],int,int);
void ac_r_array(int a[10][10],int,int);
void c_r_array(int a[10][10],int,int);
main()
{
	int arr[10][10],m,n,i,j,b[10][10];
	printf("enter size of array:");
	scanf("%d %d",&m,&n);
	printf("\nenter elemnts of array:");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\noriginal array:\n");
    for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
    m_array(arr,m,n);
    ac_r_array(arr,m,n);
    c_r_array(arr,m,n);
	return 0;	
}
void m_array(int a[10][10],int m,int n)
{
	int b[10][10],i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			b[i][j]=a[i][n-1-j];
		}
	}
	printf("\nArray after mirror image operation:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
    }
}
void ac_r_array(int a[10][10],int m,int n)
{
	int b[10][10],i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			b[i][j]=a[j][n-1-i];
		}
	}
	printf("\n array after rotation anti-clockwise by 90 degrees:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
}
c_r_array(int a[10][10],int m,int n)
{
	int b[10][10],i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			b[i][j]=a[n-1-j][i];
		}
	}
	printf("\n array after rotation clockwise by 90 degrees:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
}
