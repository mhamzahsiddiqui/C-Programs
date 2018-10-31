#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,k=0;
	printf("Enter a Number to check if prime or not");
	scanf("%d",&n);
	for(i=2;i<n/2;i++)
	{
		if(n%i==0)
		{k=1;
		break;}
	}
	if(k==1)
	printf("Not Prime");
	else
	printf("Prime");
	getch();	
}
