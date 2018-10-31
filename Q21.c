#include<stdio.h>
#include<conio.h>
void main()
{
	int yr;
	printf("Enter a year");
	scanf("%d",&yr);
	if(yr%4==0&&yr%100!=0||yr%400==0)
	printf("Leap Year");
	else
	printf("Not a Leap Year");
	getch();	
}
