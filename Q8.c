#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int p,t;float r,si,ci;
	printf("Enter Principle amount,Rate(compounded yearly),Time(in years)");
	scanf("%d%f%d",&p,&r,&t);
	si=(p*r*t)/100.0;
	ci=(p*pow((1+r),t))-p;
	printf("Simple Interest=%f\nCompound Interest=%f",si,ci);
getch();	
}
