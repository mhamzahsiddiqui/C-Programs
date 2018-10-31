#include<stdio.h>
#include<conio.h>
void main()
{
	float x,y;
	printf("Enter x and y coordinates");
	scanf("%f%f",&x,&y);
	if(x>0&&y>0)
	printf("1st Quadrant");
	if(x<0&&y>0)
	printf("2nd Quadrant");
	if(x<0&&y<0)
	printf("3rd Quadrant");
	if(x>0&&y<0)
	printf("4th Quadrant");
	getch();	
}
