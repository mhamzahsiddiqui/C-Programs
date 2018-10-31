#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,so=0,se=0;
	printf("Enter Limit");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		se=se+i;
		else
		so=so+i;
	}
	printf("Sum of Even= %d",se);
	printf("\nSum of Odd= %d",so);
	getch();	
}
