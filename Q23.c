#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d;
	printf("Enter 3 numbers");
	scanf("%d%d%d",&a,&b,&c);
	d=(a>b)?((a>c)?a:c):((b>c)?b:c);
	printf("Largest is %d",d);
	getch();	
}
