#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int a,b;char ch=' ';float d=0.0;
	printf("Enter 2 numbers");
	scanf("%d%d",&a,&b);
	printf("Enter expression");
	fflush(stdin);
	scanf("%c",&ch);
	if(ch=='+')
	{
	d=a+b;	
	printf("Sum= %f",d);
	}
	else if(ch=='-')
	{
	d=a-b;	
	printf("Difference= %f",d);
	}
	else if(ch=='*')
	{
	d=a*b;	
	printf("Product= %f",d);
    }
	else if(ch=='/')
	{
	d=a/b;	
	printf("Division= %f",d);
	}
	getch();	
}
