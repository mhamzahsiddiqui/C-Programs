#include<stdio.h>
#include<conio.h>
void main()
{
	int n,s=0,d;
	printf("Enter a Number");
	scanf("%d",&n);
	while(n!=0)
	{
		d=n%10;
		s=(s*10)+d;
		n=n/10;
	}
	printf("Reverse of Number= %d",s);
	getch();
}
