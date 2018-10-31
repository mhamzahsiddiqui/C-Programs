#include<stdio.h>
#include<conio.h>
void main()
{
	int n,a[50],i=0,j;
	printf("Enter a Decimal Number");
	scanf("%d",&n);
	while(n!=0)
	{
		a[i++]=n%2;
		n=n/2;
	}
	for(j=i-1;j>=0;j--)
	{
		printf("%d",a[j]);
	}
	getch();
}
