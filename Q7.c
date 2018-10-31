#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int a,b,c;float ar,s;
	printf("Enter sides of triangle");
	scanf("%d%d%d",&a,&b,&c);
	s=(a+b+c)/2;
	ar=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("Area=%f",ar);
getch();	
}
