#include<stdio.h>
#include<conio.h>
void main()
{
	long int n,s=0;int d;
	printf("Enter a number");
	scanf("%ld",&n);
	d=n%10;
	s=s*10+d;
	n=n/10;
	d=n%10;
	s=s*10+d;
	n=n/10;
	d=n%10;
	s=s*10+d;
	n=n/10;
	d=n%10;
	s=s*10+d;
	n=n/10;
	printf("Reverse of Number=%ld",s);
getch();	
}
