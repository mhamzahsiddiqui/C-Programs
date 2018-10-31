#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,a[100][100],b[100][100],n,c[100][100];
	printf("Enter n");
	scanf("%d",&n);
	printf("Fill the 1st Matrix");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nFill the 2nd Matrix");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("\n");printf("\n");
		for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",c[i][j]);
		}
		printf("\n");
	}
	getch();
}
