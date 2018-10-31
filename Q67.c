#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *f,*s;
	char ch;
	f=fopen("ABC.txt","r");
	s=fopen("XY.txt","w");
	while((ch=getc(f))!=EOF)
	putc(ch,s);
	fclose(f);
	fclose(s);
	getch();
}
