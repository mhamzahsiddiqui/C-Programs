#include<stdio.h>
#include<conio.h>
void main()
{
	int n,s,d,x;
	for(n=1;n<=1000;n++)
	{
		x=n;
		s=0;
		while(x!=0)
		{
			d=x%10;
			s=s+(d*d*d);
			x=x/10;
		}
	if(s==n)
	printf("\n%d is an armstrong number",n);
	}
	getch();
}
