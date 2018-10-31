#include<stdio.h>
#include<conio.h>
void main()
{
	int r;float ar=0.0,per=0.0;
	printf("Enter Radius");
	scanf("%d",&r);
	ar=(22/7)*r*r;
	per=2*(22/7)*r;
	printf("%f\n%f",ar,per);
getch();	
}
