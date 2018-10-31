#include<stdio.h>
#include<conio.h>
void main()
{
	int m1,m2,m3,m4,m5,s;float per;
	printf("Enter marks of 5 subjects");
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	s=m1+m2+m3+m4+m5;
	per=(s/500.0)*100;
	printf("Sum=%d\nPercentage=%f",s,per);
getch();	
}
