#include<stdio.h>
#include<conio.h>
void main()
{
	int i,s=0,n=0;
	for(i=0;i<=100;i++)
	{
		if(i%6==0&&i%4!=0)
		{
			n++;
			s=s+i;
			printf("%d\n",i);
		}
	}
	printf("\nSum= %d",s);
	printf("\nTotal= %d",n);
	getch();
}
