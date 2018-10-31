#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("Enter 3 numbers");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		printf("\n%d (A) is largest",a);
		else
		printf("\n%d (C) is largest",c);
	}
	else
	{
		if(b>c)
		printf("\n%d (B) is largest",b);
		else
		printf("\n%d (C) is largest",c);
	}
	getch();	
}
