#include<stdio.h>
#include<conio.h>
void main()
{
	char n[100],w[100];int l=0;int f=0,i,k=0,j;
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
	for(i=65;i<=90;i++)
	{
		for(j=0;j<l;j++)
		{
		if(n[j]==i)
		w[k++]=n[j];
		}
	}
	printf("\n%s",w);
	getch();
}
