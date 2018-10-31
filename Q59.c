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
	printf("\nLenght of String =%d",l);
	for(i=l-1;i>=0;i--)
	{
		w[i]=n[l-i-1];
	}
	for(i=0;i<l;i++)
	{
		if(w[i]!=n[i])
		{
		f=1;
		break;
		}
	}
	if(f==0)
	printf("\n%s is Palindrome",n);
	else
	printf("\n%s is Not Palindrome",n);
	getch();
}
