#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("Enter 2 numbers");
	scanf("%d%d",&a,&b);
	c=(a>b)?a:b;
	printf("Largest is %d",c);
	getch();	
}
