#include<stdio.h>
#include<conio.h>
void main()
{
	int n,f=1,i;
	printf("Enter a Number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("Factorial of %d = %d",n,f);
	getch();	
}
