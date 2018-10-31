#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c=0;
	printf("Enter a and b");
	scanf("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("a=%d\nb=%d",a,b);
getch();	
}
