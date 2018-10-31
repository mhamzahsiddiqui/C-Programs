#include<stdio.h>
#include<conio.h>
void main()
{
	char n[100],w[100];int l=0;int f=0,i;
	printf("Enter a Word");
	scanf(" %[^\t\n]s",&n);
	for(i=0;n[i]!='\0';i++)
	{
		l++;
	}
	for(i=l-1;i>=0;i--)
	{
		if(n[i]>=97&&n[i]<=122)
		{
			n[i]=n[i]-32;
		}
	}
	printf("\n%s",n);
	getch();
}
