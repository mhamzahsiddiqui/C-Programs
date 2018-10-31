#include<stdio.h>
#include<conio.h>
void main()
{
	int n;float c;
	printf("Enter 'n'");
	scanf("%d",&n);
	c=(2<<n)/2.0;
	printf("2^%d=%f",n,c);
	getch();	
}
