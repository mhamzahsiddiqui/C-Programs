#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("Enter a and b");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a=%d\nb=%d",a,b);
getch();	
}
