#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,z,t;
	printf("Enter x y z");
	scanf("%d%d%d",&x,&y,&z);
	t=x;
	x=y;
	y=z;
	z=t;
	printf("x=%d\ny=%d\nz=%d",x,y,z);
getch();	
}
