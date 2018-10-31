#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int a,b,c;float x1,x2,d=0;
	printf("Enter 'a','b','c'");
	scanf("%d%d%d",&a,&b,&c);
	if(a==0&&b==0)
	printf("Equation does not exist");
	else if(a==0)
	{
		printf("Linear Equation");
		x1=-c/b;
		printf("Root is %f",x1);
	}
	else if(b==0)
	{
		printf("Roots are imaginary");
	}
	else
	{
		d=(b*b)-(4*a*c);
		if(d>0)
		{
			x1=(-b+sqrt(d))/(2*a);
			x2=(-b-sqrt(d))/(2*a);
			printf("Roots are\n%f\n%f",x1,x2);
		}
		else
		{
			printf("Roots are Imaginary");
		}
	}
	getch();	
}
