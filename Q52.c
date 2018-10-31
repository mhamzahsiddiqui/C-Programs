#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i=0,j,d;char a[50];
	printf("Enter a Decimal Number");
	scanf("%d",&n);
	while(n!=0)
	{
		d=n%16;
		if(d<10)
		d=d+48; 
		else
		d=d+55;
		a[i++]=d;
		n=n/16;
	}
	for(j=i-1;j>=0;j--)
	{
		printf("%c",a[j]);
	}
	getch();
}
