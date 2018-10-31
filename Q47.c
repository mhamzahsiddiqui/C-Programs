#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5];
	int s=0,i;
	printf("Enter elements of Array");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
		s=s+a[i];
	}
	printf("Sum of Elements of Array =%d",s);
}
