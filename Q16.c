#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	printf("Enter a Character");
	scanf("%c",&ch);
	if(ch>=65&&ch<=90)
	printf("Capital Letter");
	else if(ch>=97&&ch<=122)
	printf("Small Letter");
	else if(ch>=48&&ch<=57)
	printf("Number");
	else
	printf("Special Character");
	getch();	
}
