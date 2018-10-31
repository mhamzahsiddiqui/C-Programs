#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	printf("Enter Alphabet");
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	printf("Vowel");
	else
	printf("Consonent");
	getch();	
}
