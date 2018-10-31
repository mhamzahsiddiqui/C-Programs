#include<stdio.h>
#include<conio.h>
void main()
{
	int n,s=0,d,x;
	printf("Enter a Number");
	scanf("%d",&n);
	x=n;
	while(n!=0)
	{
		d=n%10;
		s=s+(d*d*d);
		n=n/10;
	}
	if(s==x)
	printf("%d is an armstrong number",x);
	else
	printf("%d is not an Armstrong Number",x);
	getch();
}
