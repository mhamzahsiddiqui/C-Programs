#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,s=0,m[4][4];
	printf("Fill the Matrix");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&m[i][j]);
		}
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d",m[i][j]);
		}
		printf("\n");
	}
	printf("\n\n\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d",m[j][i]);
		}
		printf("\n");
	}
	getch();
}
