#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	printf("Enter a Number");
	scanf("%d",&n);
	if(n&1)
	printf("Odd");
	else
	printf("Even");
	getch();	
}
