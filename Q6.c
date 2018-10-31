#include<stdio.h>
#include<conio.h>
void main()
{
	float tf,tc;
	printf("Enter temp in farenheit");
	scanf("%f",&tf);
	tc=(tf-32)*5.0/9.0;
	printf("Temperature in celcius= %f",tc);
getch();	
}
